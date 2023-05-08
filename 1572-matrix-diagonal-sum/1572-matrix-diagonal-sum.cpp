class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
         int sum=0;
        int n=mat.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    sum+=mat[i][j];
                }
                if((n-j-1)==i){
                    sum+=mat[i][j];
                }
            }
        }
        if(n%2==1)
        sum-=mat[n/2][n/2];
        return sum;
    }
};