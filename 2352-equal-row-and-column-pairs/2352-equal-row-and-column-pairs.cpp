class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int  n=grid.size();
        unordered_map<string,int>mp1,mp2;
        for(auto &it:grid){
            string s="";
            for(int &i:it){
                s+=to_string(i);
                s+="#";
            }
            mp1.find(s)!=mp1.end()?mp1[s]++:mp1[s]=1;
            cout<<s<<endl;
        }
        for(int j=0;j<n;j++){
             string s="";
            for(int i=0;i<n;i++){
                s+=to_string(grid[i][j]);
                s+="#";
            }
            mp2.find(s)!=mp2.end()?mp2[s]++:mp2[s]=1;
        }
        int ans=0;
        for(auto &it:mp1){
            string s=it.first;
            if(mp2.find(s)!=mp2.end()){
                ans+=mp2[s]*it.second;
            }
        }
        return ans;
    }
};