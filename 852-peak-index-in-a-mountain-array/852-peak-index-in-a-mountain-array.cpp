class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int l=0,h=nums.size()-1;
        while(l<=h){
            int m=(l+h)/2;
            if(nums[m]>nums[m+1] && nums[m]>nums[m-1]){
                return m;
            }
            else if(nums[m]>nums[m+1])
                h=m-1;
            else
                l=m+1;
        }
        return l;
    }
};