class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])==mp.end()){
                mp[nums[i]]=1;
            }
            else{
                mp.erase(nums[i]);
            }
        }
        for(auto it:mp){
            return it.first;
        }
        return 0;
    }
};