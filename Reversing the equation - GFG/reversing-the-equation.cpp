//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
     string reverseEqn (string s)
    {
        string ans;
        string temp;
        for(int i=s.size()-1; i>=0; i--) {
            if(s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-') {
                ans = ans + temp;
                temp.erase(temp.begin(),temp.end());
                ans.push_back(s[i]);
            }
            else {
                temp = s[i] + temp;
            }
        }
        if(temp.size()) {
            ans = ans + temp;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends