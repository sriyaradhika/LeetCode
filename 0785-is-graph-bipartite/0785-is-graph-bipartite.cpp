class Solution {
    private:
    bool check(int st,int v,vector<vector<int>>& graph,int color[]){
        queue<int>q;
        q.push(st);               
        color[st]=0;
        while(!q.empty()){
            int n=q.front();
            q.pop();
            for(auto it: graph[n]){
                if(color[it]==-1){
                    color[it]=!color[n];
                    q.push(it);
                }
                else if(color[it]==color[n]){
                    return false;
                }
            }
        }
        return true;
    }
public:
    //any graph with odd length cycle cant be bipartite
    bool isBipartite(vector<vector<int>>& graph) {
        int v=graph.size();
        int color[v];
        for(int i=0;i<v;i++){
            color[i]=-1;
        }
        for(int i=0;i<v;i++){
            if(color[i]==-1){
                if(check(i,v,graph,color)==false){
                    return false;
                }
            }
        }
    return true;
    }
};

