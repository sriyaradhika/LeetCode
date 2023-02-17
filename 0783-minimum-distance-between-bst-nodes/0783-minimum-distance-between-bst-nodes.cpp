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
    int help(TreeNode* root,vector<TreeNode*>&vec,int &diff){
        if(root==NULL){
            return diff;
        }
        help(root->left,vec,diff);
        if(vec.size()>0){
            diff=min(abs(vec.back()->val - root->val),diff);
        }
        vec.push_back(root);
        help(root->right,vec,diff);
        return diff;
    }
    int minDiffInBST(TreeNode* root) {
        int d=INT_MAX;
        vector<TreeNode*>vec;
        return help(root,vec,d);
    }
};

