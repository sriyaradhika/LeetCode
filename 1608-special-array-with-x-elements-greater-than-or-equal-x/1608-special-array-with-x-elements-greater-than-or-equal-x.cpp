class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        unordered_map<int,int>mp;
        int x=n;
        for(int i=0;i<n;i++){
            if(x<=nums[i]){
               if(mp.find(x)!=mp.end()){
                   continue;
               }
                else{
                return x;
                }
            }
             mp[nums[i]]++;
            x--;
        }
        return -1;
    }
};