class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int r=grid.size();
        if(r==0){
            return 0;
        }
        int c=grid[0].size();
        vector<vector<int>>dp(r,vector<int>(c,0));
        int i,j;
        dp[0][0]=grid[0][0];
        for(i=1;i<c;i++){
            dp[0][i]=dp[0][i-1]+grid[0][i];
        }
        for(i=1;i<r;i++){
            dp[i][0]=dp[i-1][0]+grid[i][0];
        }
        for(i=1;i<r;i++){
            for(j=1;j<c;j++){
                dp[i][j]=grid[i][j]+min(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[r-1][c-1];
        }
};