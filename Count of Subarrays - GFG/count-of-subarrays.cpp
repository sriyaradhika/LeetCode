//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ll long long


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long

	ll countSubarray(int arr[], int n, int k) {
	    // code here
	   // ll s=((n*(n+1))/2);
	   ll s=0;
	    ll len=-1;
	    for(int i=0;i<n;i++){
	        if(arr[i]>k){
	            len=i;
	            s+=len+1;
	            
	        }
	        else{
	            s+=(len+1);
	        }
	    }
	   // for(int i=0;i<n;i++){
	   //     if(arr[i]<=k){
	   //         len++;
	   //         if(len>1){
	   //             s-=len;
	   //         }
	   //         else{
	   //         s-=1;
	   //         }
	   //     }
	   //     else{
	   //         len=0;
	   //     }
	   // }
	    return s;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countSubarray(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends