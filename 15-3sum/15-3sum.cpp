class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>>res;
        int sum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size() && nums[i]<=0;i++){
            if(i==0 || nums[i]!=nums[i-1]){
                int lo=i+1,hi=nums.size()-1;
                while(lo<hi){
                    sum=nums[i]+nums[lo]+nums[hi];
                    if(sum<0){
                        lo++;
                    }
                   else if(sum>0){
                        hi--;
                    }
                    else{
                res.push_back({nums[i],nums[lo++],nums[hi--]});
                         
                    while(lo<hi && nums[lo]==nums[lo-1])
                        lo++;
                    }
                }
            }
            }
        return res;
    }
};