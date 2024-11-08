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
    
   TreeNode* sortedArrayToBST(vector<int>& nums) {
       return hp(nums,0,nums.size()-1);
   }
    TreeNode* hp(vector<int>& nums,int l,int r){
        if(l>r){
            return NULL;
        }
        int m=(l+r)/2;
        TreeNode* t=new TreeNode(nums[m]);
        t->left=hp(nums,l,m-1);
        t->right=hp(nums,m+1,r);
        return t;
        }
};