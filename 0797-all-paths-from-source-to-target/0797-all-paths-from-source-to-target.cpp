class Solution {
public:
    void find(vector<vector<int>>& graph,int cur, vector<bool>&vis,int n,vector<int>&path,vector<vector<int>>&res){
        if(cur==n-1){
            res.push_back(path);
            return;
        }
        if(vis[cur]==true){
            return;
        }
        vis[cur]=true;
        for(auto it:graph[cur]){
            path.push_back(it);
            find(graph,it,vis,n,path,res);
            path.pop_back();
        }
        vis[cur]=false;
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
       vector<vector<int>>res;
        vector<int>path;
        int n=graph.size();
        vector<bool>vis(n);
        path.push_back(0);
        find(graph,0,vis,n,path,res);
        return res;
    }
};