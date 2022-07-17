class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int mini=INT_MAX;
        for(int j=0;j<m;j++){
            int res=f(n-1,j,matrix,dp,m);
            mini=min(mini,res);
        }
        return mini;
    }
    int f(int i,int j,vector<vector<int>>& matrix,vector<vector<int>>& dp,int m){
        if(j<0 || j>=m){
            return 1e9;
        }
        if(i==0){
            return matrix[0][j];
        }
        if(dp[i][j]!=-1){
             return dp[i][j];
        }
        int up=matrix[i][j]+f(i-1,j,matrix,dp,m);
        int lf=matrix[i][j]+f(i-1,j-1,matrix,dp,m);
        int rg=matrix[i][j]+f(i-1,j+1,matrix,dp,m);
        return dp[i][j]=min(up,min(lf,rg));
    }
};