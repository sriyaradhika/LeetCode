class Solution {
public:
    map<int,int>mp;
int recur(int ind,string &s){
    if(mp.find(ind)!=mp.end()){
        return mp[ind];
    }
    if(ind==s.length()){
        return 1;
    }
    if(s[ind]=='0'){
        return 0;
    }
    if(ind==s.size()-1){
        return 1;
    }
    int ans=recur(ind+1,s);
    if(stoi(s.substr(ind,2))<=26){
        ans+=recur(ind+2,s);
    }
    mp[ind]=ans;
    return ans;
}
    int numDecodings(string s) {       
        return recur(0,s);
    }
};