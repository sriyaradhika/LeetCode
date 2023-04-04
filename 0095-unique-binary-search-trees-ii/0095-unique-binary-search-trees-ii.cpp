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
    vector<TreeNode*> help(int st,int end){
        if(st>end){
            vector<TreeNode*> b;
            b.push_back(NULL);
            return b;
        }
         vector<TreeNode*> ans;
        
        for(int i=st;i<=end;i++){
            vector<TreeNode*> lf =help(st,i-1);
            vector<TreeNode*> rg =help(i+1,end);
            for(TreeNode* l:lf){
                for(TreeNode* r:rg){
                    TreeNode* root=new TreeNode(i);
                    root->left=l;
                    root->right=r;
                    ans.push_back(root);
                }
            }
        }
        return ans;
    }
    vector<TreeNode*> generateTrees(int n) {
        return help(1,n);
        
    }
};