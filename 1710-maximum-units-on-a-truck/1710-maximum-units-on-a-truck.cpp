class Solution {
public:
    int maximumUnits(vector<vector<int>>& b, int t) {
        // sort(boxTypes.begin(),boxTypes.end(),[](auto &x,auto &y){return x[1]>y[1];});
        //     int m=0,s=0;
        // for(auto it:boxTypes){
        //     if(truckSize<=0)
        //         break;
        //     m+=min(it[0],truckSize)*it[1];
        //     truckSize=truckSize-it[0];
        // }
        // return m;
        priority_queue<pair<int,int>>p;
        int cnt=0;
        
        //[[5,10],[2,5],[4,7],[3,9]]
        for(auto it:b){
            p.push({it[1],it[0]});
        }
            int units=0;
            while(!p.empty() && cnt<t){
                if(cnt+p.top().second<t){//since we reversed so p.second
                    cnt+=p.top().second;
                    units+=p.top().second*p.top().first;
                    p.pop();
            }
                else {
                    int w=t-cnt;
                    cnt+=w;
                    units+=(w)*p.top().first;
                    p.pop();
                   
                }
        }
            return units;
    }
};