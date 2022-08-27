class Solution {
public:
    bool dfs(vector<vector<char>>& board, string word,int row,int col,int next){
        if(next>=word.size())
            return true;
        if(row<0 || row>=board.size()|| col<0 || col>=board[0].size())
            return false;
        if(board[row][col]!=word[next]){
            return false;
        }
        board[row][col]='*';
        if(dfs(board,word,row+1,col,next+1) || dfs(board,word,row-1,col,next+1) || dfs(board,word,row,col+1,next+1) || dfs(board,word,row,col-1,next+1)){
            return true;
        }
        board[row][col]=word[next];
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size(),n=board[0].size(),next=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(dfs(board,word,i,j,next)){
                    return true;
                }
            }
        }
        return false;
    }
};