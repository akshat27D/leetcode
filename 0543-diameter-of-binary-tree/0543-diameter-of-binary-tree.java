/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int height(TreeNode root){
        if(root==null){
            return -1;
        }
        int left = height(root.left);
        int right =  height(root.right);
        
        int h = Math.max(left,right)+1;
        return h;
        
    }
    public int diameterOfBinaryTree(TreeNode root) {
        if(root==null){
            return 0;
        }
        int left = diameterOfBinaryTree(root.left);
        int right =  diameterOfBinaryTree(root.right);
        int sd = height(root.left) + height(root.right)+2;
        return Math.max(left,Math.max(right,sd));
        
        
        
        
        
    }
}