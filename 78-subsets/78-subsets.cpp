class Solution {
public:
    void subset(vector<int>ds,vector<vector<int>>&ans,vector<int>nums,int index){
        if(index==nums.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[index]);
        subset(ds,ans,nums,index+1);
        ds.pop_back();
         subset(ds,ans,nums,index+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>>ans;
        subset(ds,ans,nums,0);
        return ans;
    }
};