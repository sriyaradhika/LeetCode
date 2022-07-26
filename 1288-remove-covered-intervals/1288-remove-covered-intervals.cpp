class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& in) {
        sort(in.begin(),in.end(),[](const vector<int>&a,const vector<int>&b){
            if(a[0]==b[0])
            return a[1]>b[1];
            else return a[0]<b[0];
        });
        int res=0;;
        int p=-1;
        for(auto it:in){
            if(p>=it[1])
                res++;
            p=max(p,it[1]);
        }
        return in.size()-res;
    }
};