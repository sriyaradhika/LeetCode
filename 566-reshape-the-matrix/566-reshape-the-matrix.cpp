class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
       queue<int>q;
        for(int i=0;i<mat.size();i++){
             for(int j=0;j<mat[0].size();j++){
                 q.push(mat[i][j]);
             }
        }
        int k=0;
        if(q.size()==r*c){
        vector<vector<int>>v(r,vector<int>(c,-1));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                v[i][j]=q.front();
                q.pop();
                k++;
            }
        }
        return v;
        }
        else{
            return mat;
        }
    }
};