class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        vector<vector<string>>vec;
        map<string,vector<string>>mp;
        for(int i=0;i<str.size();i++){
            string x=str[i];
            sort(x.begin(),x.end());
            mp[x].push_back(str[i]);
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            vec.push_back(it->second);
        }
        return vec;
    }
};