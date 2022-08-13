class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
         vector<int>res; 
       int n=words.size();
       int m=words[0].size();
        int len=m*n;
        if(s.size()<len)
            return res;
        for(int i=0;i<=s.size()-len;i++){
            unordered_map<string,int>mp;
            for(int j=0;j<words.size();j++){
                mp[words[j]]++;
            }
            int k;
            for(k=0;k<n;k++){
                string temp=s.substr(i+k*m,m);
                if(mp.count(temp)==0)
                    break;
                else{
                    if(mp[temp]!=0)
                        mp[temp]--;
                    else
                        break;
                }
            }
            if(k==n){
                res.push_back(i);
            }
        }
        return res;
    }
};