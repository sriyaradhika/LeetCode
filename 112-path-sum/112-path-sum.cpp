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
   bool hasPathSum(TreeNode* root, int t) {
        if(!root)
            return false;
        t-=root->val;
        if(!root->left && !root->right){
            if(t==0){
                return true;
            }
            else{
                return false;
            }
        }
        if(hasPathSum(root->left,t))
            return true;
        if(hasPathSum(root->right,t))
            return true;
        return false;
    }
};