class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>& grid,int n, int m,vector<vector<bool>> &vis,int area[]){
        
        
        if(i < 0 || j < 0) return;
        if(i >= n || j >= m) return ;
        if(grid[i][j] == 0)  return;
        if(vis[i][j] == true) return ;
        
        vis[i][j] = true;
        area[0]++;
        
       dfs(i-1,j,grid,n,m,vis,area);
       dfs(i,j+1,grid,n,m,vis,area);
       dfs(i+1,j,grid,n,m,vis,area);
       dfs(i,j-1,grid,n,m,vis,area);
        
        
    }
    
    
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
      int n = grid.size();
      int m = grid[0].size();
      vector<vector<bool>> vis(n,vector<bool>(m,false));
      int maxArea = 0;
      for(int i =0; i< n;i++){
          for(int j = 0; j < m; j++){
              if(grid[i][j] == 1 && vis[i][j] == false){
                  int area[1];
                  area[0] = 0;
                  dfs(i,j,grid,n,m,vis,area);
                  maxArea = max(area[0],maxArea);
              }
          }
      }
        
        return maxArea;
        
    }
};