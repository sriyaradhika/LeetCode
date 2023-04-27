class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int c=1,j=1;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1])
            {
                nums[j]=nums[i];
                j++;
                c++;
            }
        }
        return c;
    }
};