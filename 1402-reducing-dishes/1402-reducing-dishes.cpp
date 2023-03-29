class Solution {
public:
    int maxSatisfaction(vector<int>& s) {
        sort(s.begin(),s.end());
        int ss=0;
        int ps=0;
        for(int i=s.size()-1;i>=0 && s[i]+ps>0 ;i--){
            ps+=s[i];
            ss+=ps;            
        }
        return ss;
    }
};