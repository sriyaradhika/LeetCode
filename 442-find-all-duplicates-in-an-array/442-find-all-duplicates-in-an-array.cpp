class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       unordered_map<int,int>mp;
         vector<int>ans;
        for(int i=0;i<nums.size();i++){
                       mp[nums[i]]++;
            
        }
         for(int i=0;i<nums.size();i++){
             if(mp[nums[i]]>1){
                 ans.push_back(nums[i]);
                 mp[nums[i]]=0;
             }
         }
                  return ans;
    }
};