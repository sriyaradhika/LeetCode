class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int x=0,maxi=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            int freq=it->second;
            if(mp.find(it->first + 1)!=mp.end()){
                x=freq+mp[it->first +1];
            }
            maxi=max(maxi,x);
        }
        return maxi;
    }
    
};