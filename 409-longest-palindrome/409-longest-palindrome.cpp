class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        int maxi=0;
        int cnt=0,x=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]>0){
            if(mp[s[i]]%2==0){
                cnt+=mp[s[i]];
                mp.erase(s[i]);
            }
            else{
                   cnt+=(mp[s[i]]-1);
                mp.erase(s[i]);
                x=1;
                }
            }
        }
    
        return cnt+x;
    }
};