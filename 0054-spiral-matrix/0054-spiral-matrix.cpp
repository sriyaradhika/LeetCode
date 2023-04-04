class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        int lf=0,rg=n-1,t=0,b=m-1;
        vector<int>res;
        while(lf<=rg && t<=b){
            for(int i=lf;i<=rg;i++){
                res.push_back(matrix[t][i]);
            }
            t++;
            for(int i=t;i<=b;i++){
                res.push_back(matrix[i][rg]);
            }
            rg--;
             if(t<=b){
                for(int i=rg;i>=lf;i--){
                    res.push_back(matrix[b][i]);
                }
                b--;
            }
            if(lf<=rg){
                for(int i=b;i>=t;i--){
                    res.push_back(matrix[i][lf]);
                }
                lf++;
            }
        }
        return res;
    }
};