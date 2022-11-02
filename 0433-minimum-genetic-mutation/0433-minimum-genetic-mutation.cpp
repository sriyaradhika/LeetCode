class Solution {
public:
    
int minMutation(string start, string end, vector<string>& bank) {
        queue<string>qq;
        unordered_map<string,int>vis;
        int cnt=0;
        qq.push(start);
        vis[start]=1;
    vector<char>a={'A','C','G','T'};
        while(!qq.empty()){
            for (int i=qq.size();i>0;i--) {
                string s=qq.front();
                qq.pop();
                if(s==end){
                    return cnt;
                }
                for(int j=0;j<8;j++){
                    char v=s[j];
                    for(int k=0;k<4;k++){
                        s[j]=a[k];
                        if(!vis[s] && find(bank.begin(),bank.end(),s)!=bank.end()){
                            qq.push(s);
                            vis[s]=1;
                        }
                    }
                    s[j]=v;
                }
            }
            cnt+=1;
        }
     return -1;
    }
};

