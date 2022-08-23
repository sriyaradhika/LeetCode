class Solution {
public:
    bool valid(vector<int>& weights,int days,int mid){
        int d=1;
        int sum=0;
        for(int i=0;i<weights.size();i++){
            if(sum+weights[i]<=mid){
                sum+=weights[i];
            }
            else{
                sum=weights[i];
            d++;
            }
        }
        if(d<=days)
            return true;
        return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=0;
        for(auto it:weights){
            high+=it;
        }
        int mid;
        int ans=high;
        while(low<=high){
            mid=low+(high-low)/2;
            if(valid(weights,days,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
        
    }
};