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
    void help(TreeNode* root,vector<string>&res,string cur){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            cur+=to_string(root->val);
            res.push_back(cur);
            return;
        }
        cur+=to_string(root->val)+"->";
        if(root->left){
            help(root->left,res,cur);
        }
        if(root->right){
            help(root->right,res,cur);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res;
        help(root,res,"");
        return res;
            
    }
};