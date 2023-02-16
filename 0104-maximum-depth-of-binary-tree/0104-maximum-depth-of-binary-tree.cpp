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
    int help(TreeNode* root,int d){
        if(root==NULL){
            return d;
        }
        int lr=help(root->left,d+1);
        int rg=help(root->right,d+1);
        return max(lr,rg);
    }
    int maxDepth(TreeNode* root) {
       return help(root,0);
    }
};