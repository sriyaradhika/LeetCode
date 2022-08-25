class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<3)
            return nums.size();
        int s=2,f=2;
        int cnt=0;
        while(f<nums.size()){
            if(nums[f]!=nums[s-2]){
                nums[s++]=nums[f];
            }
            else{
                cnt++;
            }
            f++;
        }
        return nums.size()-cnt;
    }
};