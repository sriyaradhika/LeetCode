class Solution {
public:
    int dim[8][2]={{1,-1},{1,0},{1,1},{0,-1},{0,1},{-1,-1},{-1,0},{-1,1}};
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int l=0;
                for(int k=0;k<8;k++){
           if(i+dim[k][0]<0 || i+dim[k][0]>=n || j+dim[k][1]<0 || j+dim[k][1]>=m ){
                continue;
            }
                    if(board[i+dim[k][0]][j+dim[k][1]]==1 || board[i+dim[k][0]][j+dim[k][1]]==2){
                        l++;
                    }
                }
                if(board[i][j]==0 && l==3){
                    board[i][j]=3;
                }
                if(board[i][j]==1 && (l<2 || l>3)){
                    board[i][j]=2;
                }
            }
        }
        
       for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){ 
                board[i][j]%=2;
            }
       }
    }
    
};