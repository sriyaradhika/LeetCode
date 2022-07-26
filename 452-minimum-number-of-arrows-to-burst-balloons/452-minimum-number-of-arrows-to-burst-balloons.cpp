class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p) {
        sort(p.begin(),p.end(),[&](vector<int>&a,vector<int>&b){return a[1]<b[1];});
        int c=1;
        int end=p[0][1];
        int n=p.size();
        for(int i=1;i<n;i++){
            if(p[i][0]>end){
                c++;
                end=p[i][1];
            }
        }
        return c;
    }
};