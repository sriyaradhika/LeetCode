class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n=arr1.size(),m=arr2.size();
        sort(arr2.begin(),arr2.end());
        int cnt=0;
        for(int i=0;i<n;i++){
            int l=0,h=m-1,mid;
        while(l<=h){
              mid=(l+h)/2;
            if(abs(arr1[i]-arr2[mid])<=d){
                cnt--;
                break;
            }
            else if(arr1[i]>arr2[mid])
                l=mid+1;
            else
                h=mid-1;
                
        }
            cnt++;
        }
        return cnt;
    }
};