class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        if(intervals.size()==0){
            return res;
        }
        sort(intervals.begin(),intervals.end());
        for(auto it: intervals){
            if(!res.empty() && it[0]<=res.back()[1]){
                res.back()[1]=max(it[1],res.back()[1]);
            }
            else{
                res.push_back(it);
            }
        }
        return res;
    }
};