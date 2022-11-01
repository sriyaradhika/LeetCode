class Solution {
public:
   int dfs(int i,int j,vector<vector<int>>& grid)
    {
        int n=grid.size();
        int m=grid[0].size();
        if(i>=n)
        return j;
        if(grid[i][j]==1&&j+1<m&&grid[i][j+1]==1)
        {
          return  dfs(i+1,j+1,grid);
        }
        else if(grid[i][j]==-1&&j-1>=0&&grid[i][j-1]==-1)
        {
          return dfs(i+1,j-1,grid);
        }
        else
        return -1;
    }
    vector<int> findBall(vector<vector<int>>& grid)
    {
      int n=grid.size();
      int m=grid[0].size();
      vector<int>ans(m);
      for(int i=0;i<m;i++)
      {
        ans[i]=dfs(0,i,grid);
      }  
      return ans;
    }
};