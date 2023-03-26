class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int,int>>vec;
        for(int i=0;i<nums.size();i++){
            string s=to_string(nums[i]);
            string x="";
            for(int i=0;i<s.size();i++){
                x+=(mapping[s[i]-'0']+'0');
            }
            vec.push_back({stoi(x),i});
        }
        sort(vec.begin(),vec.end());
        vector<int>ans;
        for(int i=0;i<vec.size();i++){
            ans.push_back(nums[vec[i].second]);
        }
        return ans;
    }
};