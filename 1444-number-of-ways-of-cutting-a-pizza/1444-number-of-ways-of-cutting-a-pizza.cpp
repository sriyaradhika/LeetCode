class Solution {
public:
    long long M=1e9+7;
    long long int dp[51][51][11];
    int n,m;
    long long int count(int r,int c,int cuts,vector<vector<int>>&apples){
        if(dp[r][c][cuts]!=-1){
            return dp[r][c][cuts];
        }
        if(cuts==0){
            dp[r][c][cuts]=(apples[r][c]>0)?1:0;
            return dp[r][c][cuts];
        }
        long long int rs=0,cs=0;
        for(int i=r+1;i<n;i++){
            if(apples[r][c]-apples[i][c]>0 && apples[i][c]>=cuts)
            rs=(rs+count(i,c,cuts-1,apples))%M;
        }
        for(int j=c+1;j<m;j++){
            if(apples[r][c]-apples[r][j]>0 && apples[r][j]>=cuts)
            cs=(cs+count(r,j,cuts-1,apples))%M;
        }
        dp[r][c][cuts]=rs+cs;
        return dp[r][c][cuts];
    }
    int ways(vector<string>& pizza, int k) {
       memset(dp,-1,sizeof(dp));
        n=pizza.size();
        m=pizza[0].size();
        vector<vector<int>>apples(n+1,vector<int>(m+1,0));
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                apples[i][j]=apples[i+1][j]+apples[i][j+1]-apples[i+1][j+1]+(pizza[i][j]=='A');
            }
        }
       long long ans=count(0,0,k-1,apples);
        return ans;
    }
};