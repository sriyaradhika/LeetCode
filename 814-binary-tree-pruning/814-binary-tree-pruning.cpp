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
    TreeNode* pruneTree(TreeNode* root) {
        if(!root)
            return NULL;
        TreeNode *lf=pruneTree(root->left);
        TreeNode *rg=pruneTree(root->right);
        if(root->val==0 && !lf && !rg){
            return NULL;
        }
        root->left=lf;
        root->right=rg;
        return root;
    }
};