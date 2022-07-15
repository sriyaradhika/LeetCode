class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
       int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,0));
        vector<int>prev(m,0);
        for(int i=0;i<n;i++){
            vector<int>cur(m,0);
            for(int j=0;j<m;j++){
                if(i==0 && j==0){
                    cur[j]=grid[i][j];
                }
                else{
                    int up=grid[i][j];
                    if(i>0)
                        up+=prev[j];
                    else
                        up+=1e9;
                    int lf=grid[i][j];
                    if(j>0)
                        lf+=cur[j-1];
                    else
                        lf+=1e9;
                    cur[j]=min(up,lf);                    
                }
            }
             prev=cur;
        }
    return prev[m-1];
}
};