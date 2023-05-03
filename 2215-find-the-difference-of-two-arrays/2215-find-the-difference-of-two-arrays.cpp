class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
       unordered_set<int>s(nums1.begin(),nums1.end());
       unordered_set<int>s1(nums2.begin(),nums2.end());
       vector<int> set1,set2;
       for(int num:s){
         if(s1.count(num)==0)
         set1.push_back(num); 
       }
        for(int num:s1){
         if(s.count(num)==0)
         set2.push_back(num); 
       }
      return  {set1, set2};

    }
};