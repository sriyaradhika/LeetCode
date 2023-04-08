class Solution {
public:
    int f(vector<int>& cost,vector<int>& dp,int n){
        if(n==1){
            return cost[1];
        }
        else if(n==0){
            return cost[0];
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        return dp[n]=min(f(cost,dp,n-1)+cost[n],f(cost,dp,n-2)+cost[n]);
        
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
       vector<int>dp(n+1,-1);
        return min(f(cost,dp,n-1),f(cost,dp,n-2));
    }
};