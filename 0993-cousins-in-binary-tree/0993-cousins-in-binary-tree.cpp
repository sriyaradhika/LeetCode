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
    void help(TreeNode* root, int x, int y,int level[2],int parent[2],int curlevel,TreeNode* curpar){
        if(root==NULL){
            return;
        }
        if(root->val==x){
            level[0]=curlevel;
            parent[0]=curpar->val;
        }
         if(root->val==y){
            level[1]=curlevel;
            parent[1]=curpar->val;
        }
        help(root->left,x,y,level,parent,curlevel+1,root);
         help(root->right,x,y,level,parent,curlevel+1,root);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        int level[2]={-1,-1};
        int parent[2]={-1,-1};
        help(root,x,y,level,parent,0,new TreeNode(-1));
        if(level[0]==level[1] && parent[0]!=parent[1]){
            return true;
        }
        return false;
    }
};