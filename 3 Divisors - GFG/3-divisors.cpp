//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    bool isPrime(int n)
    {
        if (n <= 1)
            return false;
     
        for (int i = 2; i < n; i++)
            if (n % i == 0)
                return false;
     
        return true;
    }
    vector<int> threeDivisors(vector<long long> arr, int n)
    {
        // Write your code here
        vector<int> ans;
        for(int i=0; i<n; i++){
            
            int cnt = 0;
            for(int j=2; j*j<=arr[i]; j++){
                
                if(isPrime(j)) cnt++;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while(t--){
        int q;cin>>q;
        vector<long long> query(q);
        for(int i=0;i<q;i++){
            cin>>query[i];
        }
        Solution ob;
            
        vector<int> ans = ob.threeDivisors(query,q);
        for(auto cnt : ans) {
            cout<< cnt << endl;
        }
    }
    return 0;
}
// } Driver Code Ends