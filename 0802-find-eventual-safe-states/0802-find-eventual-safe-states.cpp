class Solution {
public:
    bool dfs(int n,vector<vector<int>>& graph,vector<int>&vis,vector<int>&path,vector<int>&check){
        vis[n]=1;
        path[n]=1;
        check[n]=0;
        for(auto it:graph[n]){
            if(!vis[it]){
                if(dfs(it,graph,vis,path,check)==true){
                    check[n]=0;
                    return true;
                }
            }
            else if(path[it]){
                check[n]=0;
                return true;
            }
        }
        check[n]=1;
        path[n]=0;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
         int v=graph.size();
        vector<int>vis(v,0);
         vector<int>path(v,0);
         vector<int>check(v,0);
        vector<int>ans;
        for(int i=0;i<v;i++){
            if(!vis[i]){
                dfs(i,graph,vis,path,check);
            }
        }
        for(int i=0;i<v;i++){
            if(check[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};