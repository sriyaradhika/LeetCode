class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int s=0,l=0;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            s+=nums[i];
            while(s>=target){
                mini=min(mini,i-l+1);
                s-=nums[l++];
            }
        }
        return (mini==INT_MAX ?0:mini);
    }
};