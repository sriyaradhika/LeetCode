class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        queue<pair<int,int>>q;
        q.push({1,0});
        int n=board.size();
        vector<int>vis(n*n+1,0);
        vis[1]=1;
        while(!q.empty()){
            pair<int,int>p=q.front();
            int u=p.first;
            int v=p.second;
            q.pop();
            if(u==n*n){
                return v;
            }
            for(int i=1;i<=6;i++){
                int x=u+i;
                if(x>n*n){
                    break;
                }
                int val=0;
                int y=0;
                if(((x-1)/n)%2==1){
                    y=(n-1)-(x-1)%n;
                }
                else{
                    y=(x-1)%n;
                }
                val=board[(n-1)-(x-1)/n][y];
                if(val!=-1){
                    if(vis[val]==0){
                        q.push({val,v+1});
                        vis[val]=1;
                    }
                }
                else{
                    if(vis[x]==0){
                        q.push({x,v+1});
                        vis[x]=1;
                    }
                }
            }
        }
        return -1;
    }
};