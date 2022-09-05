/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void level(Node* x,int l,vector<vector<int>> &vec){
        if(l==vec.size()){
            vec.push_back({x->val});
        }
        else{
            vec[l].push_back(x->val);
        }
        for(Node*child:x->children){
            level(child,l+1,vec);
        }
    }
    vector<vector<int>> levelOrder(Node* root) {
        if(root==NULL){
            return {};
        }
        vector<vector<int>>vec;
        level(root,0,vec);
        return vec;
    }
};