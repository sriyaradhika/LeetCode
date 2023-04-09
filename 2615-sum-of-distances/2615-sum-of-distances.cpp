class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        unordered_map<long long,vector<long long>>mp;
        int n=nums.size();
        vector<long long>vec(n,0);
        for(int i=0;i<n;i++){
            if(mp.find(nums[i])!=mp.end()){
               mp[nums[i]][0]+=i;
                mp[nums[i]][1]++;
                mp[nums[i]][2]=0;
                
            }
            else{
                mp[nums[i]].push_back(i);
                mp[nums[i]].push_back(1);
                mp[nums[i]].push_back(0);
            }
        }
        for(int i=0;i<n;i++){
            long long x=mp[nums[i]][0]-mp[nums[i]][1]*i+mp[nums[i]][2]*i;
            mp[nums[i]][0]-=2*i;
            mp[nums[i]][1]--;
            mp[nums[i]][2]++;
            vec[i]=x;
        }
        return vec;
    }
};