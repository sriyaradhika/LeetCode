class Solution {
public:
    string sortSentence(string s) {
        vector<string>v(10,"");
        string ans="";
          string word = "";
        for(int i=0;i<s.size();i++){
            int idx = -1;
            
            if(s[i]==' '){
                 idx = s[i-1] - '0';
                //cout<<word<<" ";
                v[idx] = word.substr(0,word.size()-1);
                  word = "";
            }else if(i == s.size()-1){
                idx = s[i] - '0';
                //  cout<<word<<" ";
                v[idx] = word;
                  word = "";
            }else{
                word+=s[i];
            }
            
          
        }
        
        for(auto x: v){
          if(x == "") continue;
            ans+=x;
            ans+=' ';
        }
        return ans.substr(0,ans.size()-1);
    }
};