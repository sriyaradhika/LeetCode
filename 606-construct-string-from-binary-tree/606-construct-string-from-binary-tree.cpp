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
 string output = to_string(root->val);
        
        if(root->left != NULL || root->right != NULL) output += "(" + tree2str(root->left) + ")"; 
        if(root->right != NULL) output += "(" + tree2str(root->right) + ")";            
        
        return output;    
 */
class Solution {
public:
    string tree2str(TreeNode* root) {
        if(root==NULL){
            return "";
        }
        string out=to_string(root->val);
        if(root->left!=NULL || root->right!=NULL){
            out+="("+tree2str(root->left)+")";
        }
        if(root->right!=NULL){
             out+="("+tree2str(root->right)+")";
        }
        return out;
    }
};