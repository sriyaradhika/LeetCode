class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

          map<int,int> mp;
          vector<int> v;
          int n= nums.size();
          for(int i=0;i<n;i++){
              int r = target - nums[i];
              if(mp.find(r) != mp.end()){
                auto q = mp.find(r);
                v.push_back(q->second);
                v.push_back(i);
              }
            mp.insert(make_pair(nums[i],i));
          }
        return v;
}

};