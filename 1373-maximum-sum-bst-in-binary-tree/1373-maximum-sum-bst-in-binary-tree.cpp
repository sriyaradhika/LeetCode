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
class Node{
   public:
    int maxi,mini,mval;
    Node(int mini,int maxi,int mval){
        this->mini=mini;
        this->maxi=maxi;
        
        this->mval=mval;
    }
};
class Solution {
    private:
    Node help(TreeNode* root,int &res){
        if(!root){
            return Node(INT_MAX,INT_MIN,0);
        }
        auto lf=help(root->left,res);
        auto rg=help(root->right,res);
        if(lf.maxi<root->val && root->val<rg.mini){
            res=max(res,(lf.mval+rg.mval+root->val));
            // cout<<lf.mval<<"%%"<<rg.mval<<"$$"<<lf.mval+rg.mval+root->val<<"**"<<endl;
            return Node(min(root->val,lf.mini),max(root->val,rg.maxi),lf.mval+rg.mval+root->val);
        }
        else
        return Node(INT_MIN,INT_MAX,INT_MIN);
    }
public:
    int maxSumBST(TreeNode* root) {
        int res=0;
       help(root,res);
         return res;
    }
};