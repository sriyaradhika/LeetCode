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
    private:
    TreeNode *f,*prev,*m,*l;
public:
    void inorder(TreeNode* root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        if(prev!=NULL && (root->val<prev->val)){
            if(f==NULL){
                f=prev;
                m=root;
            }
            else{
                l=root;
            }
        }
        prev=root;
        inorder(root->right);
        
    }
    void recoverTree(TreeNode* root) {
       f=m=l=NULL;
        prev=new TreeNode(INT_MIN);
        inorder(root);
        if(f && l){
            swap(f->val,l->val);
        }
        else if(f && m){
            swap(f->val,m->val);
        }
    }
};