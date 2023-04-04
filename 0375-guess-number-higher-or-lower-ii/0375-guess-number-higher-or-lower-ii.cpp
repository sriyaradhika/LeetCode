class Solution {
public:
    int help(int st,int end,vector<vector<int>>&dp){
        if(st>=end){
            return 0;
        }
        if(dp[st][end]!=-1){
            return dp[st][end];
        }
        int maxi=INT_MAX;
        for(int i=st;i<=end;i++){
            maxi=min(maxi,i+max(help(st,i-1,dp),help(i+1,end,dp)));
        }
        return dp[st][end]=maxi;
    }
    int getMoneyAmount(int n) {
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return help(1,n,dp);
    }
};