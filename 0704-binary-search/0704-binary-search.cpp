class Solution {
public:
    int search(vector<int>& nums, int t) {
        int l=0,h=nums.size()-1,m;
        while(l<=h){
            m=(l+h)/2;
            if(nums[m]==t){
                return m;
            }
            else if(nums[l]<=t && nums[m]>t){
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        return -1;
       
    }
};