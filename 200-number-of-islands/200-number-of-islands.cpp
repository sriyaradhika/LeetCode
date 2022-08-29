class Solution {
public:
    void dfs(vector<vector<char>>& grid,int r,int c){
        int nr=grid.size();
        int nc=grid[0].size();
        grid[r][c]=0;
        if(r-1>=0 && grid[r-1][c]=='1')
            dfs(grid,r-1,c);
        if(r+1<nr && grid[r+1][c]=='1')
            dfs(grid,r+1,c);
        if(c-1>=0 && grid[r][c-1]=='1')
            dfs(grid,r,c-1);
        if(c+1<nc && grid[r][c+1]=='1')
            dfs(grid,r,c+1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int r=grid.size();
        if(r==0)
            return 0;
        int c=grid[0].size();
        int numisl=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]=='1'){
                     ++numisl;
                dfs(grid,i,j);
                }
            }
        }
        return numisl;
    }
};