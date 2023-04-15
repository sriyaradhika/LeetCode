class Solution {
public:
    int help(vector<vector<int>>&dp,const vector<vector<int>>& piles,int i,int k){
        if(i<0 || k==0){
            return 0;
        }
        if(dp[i][k]!=0){
            return dp[i][k];
        }
        int ex=help(dp,piles,i-1,k);
        int in=0;
        for(int j=0;j<piles[i].size();j++){
            if(j>=k){
                break;
            }
            in+=piles[i][j];
            int next=help(dp,piles,i-1,k-j-1);
            ex=max(in+next,ex);
        }
        dp[i][k]=ex;
        return ex;
    }
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        int n=piles.size();
        vector<vector<int>>dp(n+1,vector<int>(k+1,0));
        return help(dp,piles,n-1,k);
    }
};