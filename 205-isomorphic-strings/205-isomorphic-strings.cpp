class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>f;
        if(s.length()!=t.length())
            return false;
        for(int i=0;i<s.size();i++){
            if(f.find(s[i])==f.end())
            f[s[i]]=t[i];
            else
            {
                if(f[s[i]]!=t[i])
                    return false;
            }
        }
        f.clear();
         for(int i=0;i<s.size();i++){
            if(f.find(t[i])==f.end())
            f[t[i]]=s[i];
            else
            {
                if(f[t[i]]!=s[i])
                    return false;
            }
        }
        return true;
    }
};