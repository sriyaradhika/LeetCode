class Solution {
public:
    bool merge(int x,int y,vector<int> &parent,vector<int> &rank){
        int lx=find(x,parent);
        int ly=find(y,parent);
        if(lx!=ly){
            if(rank[lx]>rank[ly]){
                parent[ly]=lx;
            }
            else if(rank[lx]<rank[ly]){
                parent[lx]=ly;
            }
            else{
                parent[lx]=ly;
                rank[ly]++;
            }
            return true;
        }
        return false;
    }
    int find(int x,vector<int> &parent){
         if(parent[x]==x){
             return x;
         }
        int tmp=find(parent[x],parent);
        parent[x]=tmp;
        return tmp;
    }
    static bool cmp(vector<int>&a,vector<int>&b){
        return a[0]>b[0];
    }
    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
        sort(edges.begin(),edges.end(),cmp);
        vector<int>parenta;
        vector<int>parentb;
        vector<int>ranka(n+1,1);
        vector<int>rankb(n+1,1);
        for(int i=0;i<n+1;i++){
            parenta.push_back(i);
            parentb.push_back(i);
        }
        int mergeda=1,mergedb=1;
        int remedge=0;
        for(auto it:edges){
            if(it[0]==3){
                bool tmpa=merge(it[1],it[2],parenta,ranka);
                bool tmpb=merge(it[1],it[2],parentb,rankb);
                if(tmpa==true){
                    mergeda++;
                }
                if(tmpb==true){
                    mergedb++;
                }
                if(tmpa==false && tmpb==false){
                    remedge++;
                }
            }
            else if(it[0]==1){
                bool tmpa=merge(it[1],it[2],parenta,ranka);
                if(tmpa==true){
                    mergeda++;
                }
                else{
                    remedge++;
                }
            }
            else{
                bool tmpb=merge(it[1],it[2],parentb,rankb);
                if(tmpb==true){
                    mergedb++;
                }
                else{
                    remedge++;
                }
            }
        }
        if(mergeda!=n || mergedb!=n){
            return -1;
        }
        return remedge;
    }
};