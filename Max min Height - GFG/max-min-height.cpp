//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    bool check(long long int mid,vector <int> &a,int w,int k){
        long long int op=0;
        int n=a.size();
        vector<int>pref(n+1,0);
        for(int i=0;i<n;i++){
            if(i!=0){
                pref[i]+=pref[i-1];
            }
            int cur=pref[i];
            if(a[i]+cur<mid){
                op+=(mid-a[i]-cur);
                pref[i]+=(mid-a[i]-cur);
                if(i+w<n){
                    pref[i+w]-=(mid-a[i]-cur);
                }
            }
        }
        return op<=k;
    }
        long long int maximizeMinHeight(int n,int k,int w,vector <int> &a)
        {
            // code here
            long long int maxi=*max_element(a.begin(),a.end());
            long long int start=1,end=maxi+k;
            long long int ans=-1;
            while(start<=end){
                long long int mid=(start+end)/2;
                if(check(mid,a,w,k)){
                    ans=mid;
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
            return ans;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,w;
        cin>>n>>k>>w;
        vector <int> a(n);
        for(auto &j:a)
            cin>>j;
        Solution s;
        cout<<s.maximizeMinHeight(n,k,w,a)<<endl;
    }
    return 0;
}
// } Driver Code Ends