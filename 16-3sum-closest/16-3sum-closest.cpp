class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
       int dif=INT_MAX;
        sort(nums.begin(),nums.end());
        int l,h;
        for(int i=0;i<nums.size();i++){
            l=i+1;
            h=nums.size()-1;
            while(l<h){
            int sum=nums[i]+nums[l]+nums[h];
            if(abs(sum-target)<abs(dif)){
                dif=target-sum;
            }
            if(sum<target){
                l++;
            }
            else{
                h--;
            }
            }
        }
        return target-dif;
    }
};