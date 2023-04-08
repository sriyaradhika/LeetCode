/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(node==NULL){
            return node;
        }
        map<Node*,Node*>mp;
        queue<Node*>q;
        Node* newnode=new Node();
        newnode->val=node->val;
        mp[node]=newnode;
        q.push(node);
        while(!q.empty()){
            int s=q.size();
            while(s-->0){
                Node* org=q.front();
                q.pop();
                for(Node* child:org->neighbors){
                    if(mp.find(child)==mp.end()){
                        Node* newchild=new Node();
                    newchild->val=child->val;
                        q.push(child);
                    mp[child]=newchild;
                }
                    Node* newlist=mp[org];
                    newlist->neighbors.push_back(mp[child]);
            }
        }
        }       
       return mp[node]; 
    }
};