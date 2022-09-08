class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int st=0,maxm=0;
        int j=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            if(mp[s[i]]>1){
                while(st<s.length() && mp[s[i]]>1){
                    mp[s[st]]--;
                    st++;
                }
            }
            maxm=max(maxm,i-st+1);
        }
        return maxm;
    }
};