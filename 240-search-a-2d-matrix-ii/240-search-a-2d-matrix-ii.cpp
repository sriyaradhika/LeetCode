class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        if(m==0 || n==0){
            return false;
        }
        int i=m-1;
        int j=0;
        while(i>=0 && j<n){
            if(matrix[i][j]==target){
                return true;
            }
            else if(matrix[i][j]>target){
                i--;
            }
            else{
                j++;
            }
        }
        return false;
    }
};