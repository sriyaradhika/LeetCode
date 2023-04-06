class Solution {
pair<int,int>directions[4]={{-1,0},{0,1},{1,0},{0,-1}};
public:
    int bfs(int i,int j,vector<vector<int>>&grid,int n,int m){
        queue<pair<int,int>>q;
        q.push({i,j});
        int res=1;
        while(!q.empty()){
            pair<int,int>p=q.front();
            q.pop();
            for(auto &it:directions){
                int x=p.first+it.first;
                int y=p.second+it.second;
                if(x<0 || y<0 || y>m-1 || x>n-1 || grid[x][y]==1){
                    continue;
                }
                if(x==0 || y==0 || x==n-1 || y== m-1){
                    res=0;
                }
                grid[x][y]=1;
                q.push({x,y});
            }
        }
        return res;
    }

    int closedIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=1;i<n-1;i++){
            for(int j=1;j<m-1;j++){
                if(grid[i][j]==0){
                    int t=bfs(i,j,grid,n,m);
                    ans+=t;
                }
            }
        }
        return ans;
    }
};
