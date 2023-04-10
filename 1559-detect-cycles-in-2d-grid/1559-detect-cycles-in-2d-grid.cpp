class Solution {
public:
    vector<pair<int,int>>dir={{-1,0},{0,1},{1,0},{0,-1}};
    bool dfs(int cr,int cc,vector<vector<char>>&grid,int px,int py,vector<vector<bool>>&vis){
         int n=grid.size(),m=grid[0].size();
        vis[cr][cc]=true;
        for(int i=0;i<4;i++){
            int nr=cr+dir[i].first;
            int nc=cc+dir[i].second;
            if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==grid[cr][cc] && (nr!=px || nc!=py)){
               
                    if(vis[nr][nc] || dfs(nr,nc,grid,cr,cc,vis)){
                        return true;
                    }
                    
                
            }
        }
        return false;
    }
    bool containsCycle(vector<vector<char>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                //i j current,-1 -1 parent,grid[i][j] char
                if(!vis[i][j] && dfs(i,j,grid,-1,-1,vis)){
                    return true;
                }
            }
        }
        return false;;
    }
};