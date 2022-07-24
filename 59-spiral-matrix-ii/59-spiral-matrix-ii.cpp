class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>res(n,vector<int>(n,-1));
        int sr=0,er=n-1,sc=0,ec=n-1,cnt=1;
        while(sr<=er && sc<=ec){
            for(int i=sc;i<=ec;i++)
                res[sr][i]=cnt++;
            sr++;
            for(int i=sr;i<=er;i++)
                res[i][ec]=cnt++;
            ec--;
            for(int i=ec;i>=sc;i--)
                res[er][i]=cnt++;
            er--;
            for(int i=er;i>=sr;i--)
                res[i][sc]=cnt++;
            sc++;
        }
        return res;
    }
};