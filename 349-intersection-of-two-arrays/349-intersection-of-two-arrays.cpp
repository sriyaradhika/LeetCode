class Solution {
public:
    vector<int> intersection(vector<int>& n1, vector<int>& n2) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<n1.size();i++){
            mp[n1[i]]++;
        }
        for(int i=0;i<n2.size();i++){
            if(mp.find(n2[i])!=mp.end()){
                if(mp[n2[i]]>0){
                ans.push_back(n2[i]);
                mp[n2[i]]=0;
                }
            }
        }
        return ans;
    }
};