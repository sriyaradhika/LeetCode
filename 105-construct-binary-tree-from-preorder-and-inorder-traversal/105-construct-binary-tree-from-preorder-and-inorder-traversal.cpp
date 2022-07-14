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
     
    public:
    TreeNode* helper(int pi , int pj, int ii, int ij, vector<int> &preorder, vector<int> &inorder,map<int,int> &hm){
        
      if(pi > pj || ii > ij) return NULL;
        
        
        
       TreeNode *root  = new TreeNode(preorder[pi]);
        
       int cele = preorder[pi];
       int cidx = hm[cele];
       int numele = cidx - ii;
       
        
        root->left = helper(pi+1,pi + numele,ii,cidx-1,preorder,inorder,hm);
        
        root->right = helper(pi+numele+1,pj,cidx+1,ij,preorder,inorder,hm);
        
        
        return root;
    }

    
    
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    
    int n = preorder.size();
    map<int,int> hm;
    for(int i = 0; i < n; i++){       
        hm[inorder[i]] = i;
    }
        

    return helper(0,n-1,0,n-1,preorder,inorder,hm);

    }
};