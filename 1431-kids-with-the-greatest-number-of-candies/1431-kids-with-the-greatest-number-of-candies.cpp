class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int e) {
        vector<bool>v;
        int maxi=INT_MIN;
        for(auto &it:c){
            maxi=max(maxi,it);
            it=it+e;
        }
        for(auto it:c){
            if(it>=maxi){
                v.push_back(true);
            }
            else{
                 v.push_back(false);
            }
        }
        return v;
    }
};