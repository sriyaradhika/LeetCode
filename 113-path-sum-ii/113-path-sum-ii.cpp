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
    vector<vector<int>> v;
    int helper(TreeNode *root,int t,vector<int> p,int u)
    {
        if(root==NULL)
        {
            return 0;
        }
        u+=root->val;
        p.push_back(root->val);
         if(root->right==NULL&&root->left==NULL&&u==t)
        {
        
            v.push_back(p);
            return 0;
        }
        else
        {
            helper(root->left,t,p,u);
            helper(root->right,t,p,u);
            return 0;
        }
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> inv;
        helper(root,targetSum,inv,0);
        return v;
           
    }
};