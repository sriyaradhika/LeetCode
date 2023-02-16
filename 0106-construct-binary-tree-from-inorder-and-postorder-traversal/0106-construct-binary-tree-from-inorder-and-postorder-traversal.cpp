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
    vector<int>pso;
     unordered_map<int,int> mp;
    TreeNode* help(int is,int ie,int ps,int pe){
        if(ps>pe || is>ie){
            return NULL;
        }
        TreeNode* root=new TreeNode(pso[pe]);
        int ind=mp[root->val];
        int elelf=ind-is;
        root->left=help(is,ind-1,ps,ps+elelf-1);
         root->right=help(ind+1,ie,ps+elelf,pe-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        pso=postorder;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        return help(0,inorder.size()-1,0,postorder.size()-1);
    }
};