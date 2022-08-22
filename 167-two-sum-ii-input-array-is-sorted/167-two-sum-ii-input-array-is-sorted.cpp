class Solution {
public:
    vector<int> twoSum(vector<int>& num, int k) {
        unordered_map<int,int>mp;
        vector<int>ans;
        int l;
        for(int i=0;i<num.size();i++){
            l=num[i];
            if(mp.find(k-l)!=mp.end()){
                ans.push_back(mp[k-l]+1);
                ans.push_back(i+1);
                break;
            }
            else{
                mp[l]=i;
            }
        }
        return ans;
    }
};