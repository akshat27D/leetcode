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
    bool func(TreeNode* root , long low , long high){
        if(root==NULL){
            return true;
        }
        if((root->val<high) && (root->val > low)){
            return ((func(root->left,low,root->val)) && (func(root->right,root->val,high)));
        }else{
            return false;
        }
    }
    bool isValidBST(TreeNode* root) {
        bool ans = func(root,LONG_MIN,LONG_MAX);
        return ans;
        
    }
};