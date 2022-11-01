class Solution {
public:
    void dfs(vector<vector<int>> image,vector<vector<int>>& ans,int delr[],int delc[],int r,int c,int ic,int cl){
         ans[r][c]=cl;
        int n=image.size();
        int m=image[0].size();
        for(int i=0;i<4;i++){
            int nr=r+delr[i];
            int nc=c+delc[i];
            
            if(nr>=0 && nr<n && nc>=0 && nc<m && image[nr][nc]==ic && ans[nr][nc]!=cl){
                dfs(image,ans,delr,delc,nr,nc,ic,cl);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int cl) {
        int ic=image[sr][sc];
         vector<vector<int>>ans=image;
        int delr[]={-1,0,1,0};
        int delc[]={0,1,0,-1};
        dfs(image,ans,delr,delc,sr,sc,ic,cl);
        return ans;
    }
};