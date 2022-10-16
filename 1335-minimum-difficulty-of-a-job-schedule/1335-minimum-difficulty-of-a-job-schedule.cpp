class Solution {
public:
     long long  helper(vector<int>& job, int idx, int d, vector<vector<long long >>& dp){
        if(d==0 && idx==job.size()) return (long long)0 ;
        if(d==0 || idx==job.size()) return INT_MAX;
        
        if(dp[idx][d]!=-1) return dp[idx][d];
        
        dp[idx][d]=INT_MAX;
        int cur=job[idx];
        
        for(int i=idx;i<job.size();i++){
            cur= max(cur,job[i]);
            dp[idx][d]=min(dp[idx][d],cur+helper(job,i+1,d-1,dp));
        }
        
        return dp[idx][d];
    }
    
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        vector<vector<long long >> dp(jobDifficulty.size(),vector<long long >(d+1,-1));
        int ans= helper(jobDifficulty,0,d,dp);
        if(ans>=INT_MAX) return -1;
        
        return ans;
    }
};