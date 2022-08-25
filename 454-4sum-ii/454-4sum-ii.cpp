class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int cnt=0;
        unordered_map<int,int>mp;
        for(auto c:nums3){
            for(auto d: nums4){
                mp[c+d]++;
            }
        }
          for(auto a:nums1){
            for(auto b: nums2){
                if(mp[-(a+b)]>0)
                    cnt+=mp[-(a+b)];
            }
        }
        return cnt;
    }
};