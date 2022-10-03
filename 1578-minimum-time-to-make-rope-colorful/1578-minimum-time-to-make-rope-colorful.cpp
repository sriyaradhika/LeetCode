class Solution {
public:
    int minCost(string s, vector<int>& n) {
        int cnt=0;
        for(int i=0;i<n.size()-1;i++){
            if(s[i]==s[i+1]){
                if(n[i]>n[i+1]){
                     cnt+=n[i+1];
                    swap(s[i],s[i+1]);
                    swap(n[i],n[i+1]);
                }
                else{
                    cnt+=n[i];
                }
            }
        }
        return cnt;
    }
};