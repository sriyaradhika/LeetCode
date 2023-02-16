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
    int help(TreeNode* root,bool lf){
        if(root==NULL){
            return 0;
        }
        if(root->left==NULL && root->right==NULL && lf){
            return root->val;
        }
        int ls=help(root->left,true);
        int rg=help(root->right,false);
        return ls+rg;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return help(root,false);
    }
};