class Solution {
public:
    int random(int ind,vector<int>&nums,int x,vector<int>&dp){
        if(x<0 || ind>=nums.size())
            return 0;
        if(x==0)
            return 1;
        if(dp[x]!=-1)
            return dp[x];
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=x)
            cnt+=random(i,nums,x-nums[i],dp);
        }
        return dp[x]=cnt;
    }
    
    int combinationSum4(vector<int>& nums, int target) {
       int cnt=0;
        vector<int> dp(target+1,-1);
        for(int i=0;i<nums.size();i++){
            cnt+=random(i,nums,target-nums[i],dp);
        }
        return cnt;
    }
};