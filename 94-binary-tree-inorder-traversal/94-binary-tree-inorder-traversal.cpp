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
    void help(TreeNode* cur,vector<int>&in){
        if(cur==NULL){
            return;
        }
        help(cur->left,in);
        in.push_back(cur->val);
        help(cur->right,in);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>in;
        help(root,in);
        return in;
    }
    //     vector<int>inorder;//we have took inorder vector
    //     TreeNode* cur=root;//so that root cannot get destroyed
    //     while(cur!=NULL){
    //         if(cur->left==NULL){
    //             inorder.push_back(cur->val);
    //             cur=cur->right;
    //         }
    //         else{
    //             TreeNode* prev=cur->left;
    //             while(prev->right && prev->right!=cur){
    //                 prev=prev->right;
    //             }
    //             if(prev->right==NULL){
    //                 prev->right=cur;
    //                 cur=cur->left;
    //             }
    //             else{
    //                 prev->right=NULL;
    //                 inorder.push_back(cur->val);
    //                 cur=cur->right;
    //             }
    //         }
    //     }
    //     return inorder;
    // }
};