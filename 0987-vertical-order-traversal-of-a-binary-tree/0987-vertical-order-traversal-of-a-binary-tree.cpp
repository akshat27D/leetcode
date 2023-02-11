/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        queue<pair<TreeNode*,pair<int,int>>>q;   // q(node,vertical,lvl)
        q.push({root,{0,0}});
        map<int,map<int,multiset<int>>>mp;      // mp(vertical,(lvl,{multi_nodes}))
        vector<vector<int>>ans;
        
        while(q.size()){
            int n= q.size();
            for(int i=0 ; i<n ; i++){
                auto it = q.front().first;
                auto vert = q.front().second.first;
                auto lvl = q.front().second.second;
                q.pop();
                mp[vert][lvl].insert(it->val);
                if(it->left){
                    q.push({it->left,{vert-1,lvl+1}});
                }
                if(it->right){
                    q.push({it->right,{vert+1,lvl+1}});
                }
            }
        }
        
        for(auto it : mp){           // for traversal of outer map containing vertical index in first part, level and multinodes in second part
            vector<int>temp;
            for(auto jt : it.second){   // for traverssal of inner map containing level and multinodes
                temp.insert(temp.end(), jt.second.begin() , jt.second.end()); // instead of pushing back we are inserting in temp vector
            }
            ans.push_back(temp);
        }
        
        return ans;
        
    }
};