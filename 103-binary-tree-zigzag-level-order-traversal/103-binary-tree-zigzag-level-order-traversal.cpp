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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==NULL)
            return res;
        queue<TreeNode*>qu;
        qu.push(root);
        bool lr=true;
        while(!qu.empty()){
            int s=qu.size();
            vector<int>r(s);
            for(int i=0;i<s;i++){
                TreeNode* node=qu.front();
                qu.pop();
                 int ind=(lr)? i:(s-i-1);
                r[ind]=node->val;
                if(node->left)
                  qu.push(node->left);
                if(node->right)
                  qu.push(node->right);
            }
            lr=!lr;
            res.push_back(r);
        }
        return res;
    }
};