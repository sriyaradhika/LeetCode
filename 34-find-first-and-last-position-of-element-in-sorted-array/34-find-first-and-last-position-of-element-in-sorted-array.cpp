class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       auto ltidx = lower_bound(nums.begin(),nums.end(),target);
       auto upidx = upper_bound(nums.begin(),nums.end(),target);
        vector<int> res(2,-1);
        if((ltidx - nums.begin()) == (upidx-nums.begin())) return res;
        
        
     res[0] = (ltidx - nums.begin());
     res[1] = ((upidx-nums.begin())-1);
        
        return res;
        
        
        
        
        
    }
};