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
    TreeNode* bst(int s, int l , vector<int> &nums){
        if(s>l){
            return NULL;
        }
        int mid = (s+l)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = bst(s,mid-1,nums);
        root->right = bst(mid+1,l,nums);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        return bst(0,n-1,nums);
        
    }
};