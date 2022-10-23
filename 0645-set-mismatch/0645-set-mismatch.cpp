class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j=1,x=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==j){
                j++;
            }
            if(i>=1 && nums[i-1]==nums[i]){
                x=nums[i];
            }
        }
        return {x,j};
    }
};