class Solution {
public:
    
    int longestPalindrome(vector<string>& words) {
       unordered_map<string,int>s;
        for(auto it: words){
            s[it]++;
        }
        bool flag=false;
        int v=0;
        for(auto it:words){                    
          string x=it;
            reverse(x.begin(),x.end());
            if(x!=it && s[x]>0 && s[it]>0){                
                v+=4;
                s[x]--;
                s[it]--;
            }
            else if(x==it && s[x]>1){
                v+=4;
                s[x]-=2;
            }
            else if(x==it && s[x]>0 && !flag){
                v+=2;
            s[x]--;
            flag=true;
            }
            }
        
        return v;
    }
};