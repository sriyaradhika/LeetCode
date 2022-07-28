class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),[](auto &x,auto &y){return x[1]>y[1];});
            int m=0,s=0;
        for(auto it:boxTypes){
            if(truckSize<=0)
                break;
            m+=min(it[0],truckSize)*it[1];
            truckSize=truckSize-it[0];
        }
        return m;
    }
};