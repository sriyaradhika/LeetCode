class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        unordered_map<string,vector<string>>mp;
        for(auto p:paths){
            stringstream ss(p);
            string d,f;
            getline(ss,d,' ');
            while(getline(ss,f,' ')){
                string cnt=f.substr(f.find('(')+1,f.find(')')-f.find('(')-1);
                string n=d+'/'+f.substr(0,f.find('('));
                mp[cnt].push_back(n);
            }
        }
        vector<vector<string>>res;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second.size()>1){
                res.push_back(it->second);
            }
        }
        return res;
    }
};