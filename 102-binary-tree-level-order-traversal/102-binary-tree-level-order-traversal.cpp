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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root==NULL)
            return res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            vector<int>ans;
            for(int i=0;i<s;i++){
            TreeNode* x=q.front();
            q.pop();
            if(x->left !=NULL)
                q.push(x->left);
             if(x->right !=NULL)
                q.push(x->right);
            ans.push_back(x->val);
            }
            res.push_back(ans);
        }
        return res;
    }
    
};