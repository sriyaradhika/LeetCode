class NumMatrix {
public:
    vector<vector<int>>prefix;
    NumMatrix(vector<vector<int>>& m1) {
        int m=m1.size();
        int n=m1[0].size();
        prefix.resize(m+1,vector<int>(n+1,0));
        prefix[1][1]=m1[0][0];
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                prefix[i][j]=prefix[i-1][j]+prefix[i][j-1]+m1[i-1][j-1]-prefix[i-1][j-1]; 
                    
            }
        }
    }
    
    int sumRegion(int r1, int c1, int r2, int c2) {
    int sum=prefix[r2+1][c2+1]-prefix[r1][c2+1]-prefix[r2+1][c1]+prefix[r1][c1];        
      return sum;
    }
};


//     int sumRegion(int row1, int col1, int row2, int col2) {
//         int sum = 0;
//         sum += prefix[row2+1][col2+1];
//         sum -= prefix[row1][col2+1];
//         sum -= prefix[row2+1][col1];
//         sum += prefix[row1][col1];
//         return sum;
//     }