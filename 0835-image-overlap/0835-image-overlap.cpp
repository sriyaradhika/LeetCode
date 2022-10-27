class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        vector<pair<int,int>>v1;
        vector<pair<int,int>>v2;
        for(int i=0;i<img1.size();i++){
            for(int j=0;j<img1[0].size();j++){
                if(img1[i][j]==1){
                    v1.push_back({i,j});
                }
                if(img2[i][j]==1){
                    v2.push_back({i,j});
                }
        }
        }
        int maxi=0;
        map<pair<int,int>,int>mp;
        for(auto i:v1){
            for(auto j:v2){
                int x1=i.first-j.first;
                int y1=i.second-j.second;
                mp[{x1,y1}]++;
                maxi=max(maxi,mp[{x1,y1}]);
            }
        }
        return maxi;
    }
};