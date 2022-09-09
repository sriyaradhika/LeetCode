class Solution {
public:
    static bool comp(const vector<int>&x,const vector<int>&y){
            return x[0]==y[0] ? x[1]<y[1] : x[0]>y[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& p) {
        int maxdef=INT_MIN;
        int weak=0;
        sort(p.begin(),p.end(),comp);
        for(auto &x:p){
            if(x[1]<maxdef){
                weak++;
            }
            maxdef=max(maxdef,x[1]);
        }
        return weak;
    }
};