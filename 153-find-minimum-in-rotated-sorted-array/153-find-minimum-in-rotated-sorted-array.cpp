class Solution {
public:
    int findMin(vector<int>& nums) {
        int mn=INT_MAX;
        int l=0;
        int h=nums.size()-1;
        while(l<=h){
            int m=(l+(h-l)/2);
            if(nums[l]<=nums[m]){
                mn=min(mn,nums[l]);
                l=m+1;
            }
            else{
                mn=min(mn,nums[m]);
                h=m-1;
            }
        }
        return mn;
    }
};