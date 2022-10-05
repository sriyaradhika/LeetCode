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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode *p = new TreeNode(val, root, nullptr);
            return p;
        }

        queue<TreeNode*> q{};
        q.push(root);
        depth--;
        int c = 1;
        while(depth!=1){
            while(c>0){
                TreeNode *p = q.front();
                q.pop();
                if(p->left)
                    q.push(p->left);
                if(p->right)
                    q.push(p->right);
                c--;
            }
            c = q.size();
            depth--;
        }

        while(q.size()){
            TreeNode *p = q.front();
            q.pop();
            TreeNode* l = new TreeNode(val, p->left, nullptr);
            TreeNode* r = new TreeNode(val, nullptr, p->right);
            p->left = l;
            p->right = r;
        }

        return root;
    }
    
};