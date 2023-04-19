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
    void dfs(TreeNode* root,int &ans,int l,int r){
        if(root==NULL){
            return;
        }
        ans=max(ans,max(l,r));
        dfs(root->left,ans,r+1,0);
        dfs(root->right,ans,0,l+1);
    }
    int longestZigZag(TreeNode* root) {
        int ans=0;
        dfs(root,ans,0,0);
        return ans;
    }
};