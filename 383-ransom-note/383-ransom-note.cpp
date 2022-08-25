class Solution {
public:
    bool canConstruct(string r, string m) {
        unordered_map<char,int>mp;
        int cnt=0;
        for(int i=0;i<m.size();i++){
            mp[m[i]]++;
        }
         for(int i=0;i<r.size();i++){
           if(mp.find(r[i])!=mp.end()){
               if(mp[r[i]]>0){
                mp[r[i]]--;
               cnt++;
               }
               }
           }
        if(cnt==r.size()){
            return true;
        }
        else{
            return false;
        }
        }
};