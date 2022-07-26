class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tg=0,tc=0;
        for(int i=0;i<gas.size();i++){
            tg+=gas[i];
            tc+=cost[i];
        }
        if(tc>tg){
            return -1;
        }
        int start=0,rem=0;
        for(int i=0;i<gas.size();i++){
            rem=rem+(gas[i]-cost[i]);
            if(rem<0){
                start=i+1;
                rem=0;
            }
        }
        return start;
    }
};