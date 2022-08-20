class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
         vector<int>ans;
        for(auto& n:nums){//this works because range id from 1 to n

             if(nums[abs(n)-1]>0){
                 nums[abs(n)-1]*=-1;
             }  
            else{
                ans.push_back(abs(n));
            }
            
        }
        return ans;
    }
};