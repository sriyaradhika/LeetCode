class Solution {
public:
    long long findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        long long cnt=0;
        vector<vector<int>>dp(m,vector<int>(n,-1));
        vector<vector<int>>arr(m,vector<int>(n,maxMove));
       return f(m,n,maxMove,startRow,startColumn,0,dp,arr)%1000000007;
    }
    long long f(int m, int n, int maxMove, int i, int j,long long cnt,vector<vector<int>>& dp,vector<vector<int>>& arr){
        if(maxMove<0){
            return 0;
        }
        if(i==m || j==n || i==-1 || j==-1){
            return 1;           
        }
        if(dp[i][j]!=-1 && arr[i][j]==maxMove)
            return dp[i][j];
        long long lf=f(m,n,maxMove-1,i-1,j,cnt,dp,arr);
        long long rg=f(m,n,maxMove-1,i+1,j,cnt,dp,arr);
        long long up=f(m,n,maxMove-1,i,j-1,cnt,dp,arr);
        long long dn=f(m,n,maxMove-1,i,j+1,cnt,dp,arr);
        cnt=lf+rg+up+dn;
        arr[i][j]=maxMove;
    return dp[i][j]=cnt%1000000007;
    }
};