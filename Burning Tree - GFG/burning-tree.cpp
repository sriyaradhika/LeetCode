//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
  Node* help(Node* root,unordered_map<Node*,Node*>&mp,int target){
      queue<Node*>q;
      q.push(root);
      Node* y;
      while(!q.empty()){
          Node* x=q.front();
          q.pop();
          if(x->data==target){
               y=x;
          }
          if(x->left){
              mp[x->left]=x;
              q.push(x->left);
          }
          if(x->right){
              mp[x->right]=x;
              q.push(x->right);
          }
      }
      return y;
  }
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        int time=0;
        unordered_map<Node*,Node*>mp;
        Node* t=help(root,mp,target);
        queue<Node*>q;
        q.push(t);
        unordered_map<Node*,bool>vis;
        vis[t]=true;
        while(!q.empty()){
            int s=q.size();
            int f=0;
            for(int i=0;i<s;i++){
                Node* x=q.front();
                q.pop();
                if(x->left && !vis[x->left]){
                    q.push(x->left);
                    vis[x->left]=true;
                    f=1;
                }
                if(x->right && !vis[x->right]){
                    q.push(x->right);
                    vis[x->right]=true;
                    f=1;
                }
                if(mp[x] && !vis[mp[x]]){
                    q.push(mp[x]);
                    vis[mp[x]]=true;
                    f=1;
                }
            }
            if(f){
                time++;
            }
        }
        return time;
    }
};

//{ Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}

// } Driver Code Ends