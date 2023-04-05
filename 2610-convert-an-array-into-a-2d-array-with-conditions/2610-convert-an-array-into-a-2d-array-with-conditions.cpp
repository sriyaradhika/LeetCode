class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
       vector<vector<int>>ans;
        vector<int>res;
        set<int>st;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()){
                mp[nums[i]]++;
            }
            else{
                mp[nums[i]]=1;
                st.insert(nums[i]);
            }
            
        }
        while(mp.size()>0){
         for(auto it:st){
             if(mp.find(it)!=mp.end()){
                 res.push_back(it);
                 mp[it]--;
                 if(mp[it]<1){
                     mp.erase(it);
                 }
             }
         } 
            ans.push_back(res);
            res.clear();
        }
        return ans;
    }
};