//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++


    class Solution {
  public:
    int minOperation(string s) {
        // code here
        string h="";
        if(s.size()==1){
            return 1;
        }
        int cnt=0,max=0;
        for(int i=0;i<s.size();i++){
            if(s.substr(i,i)==h){
                int k=h.size();
                    max=(max,k);
            }
                     h+=s[i];
                     cnt++;
                     }
                
        cnt-=(max-1);
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.minOperation(s) << "\n";
    }
    return 0;
}

// } Driver Code Ends