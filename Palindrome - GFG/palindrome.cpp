//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
#include <iostream>
class Solution
{
	public:
	int palindrome(int n)
{int reverse=0;
 int lastdigit;
 while(n!=0)
{lastdigit=(n%10);
reverse=((reverse*10)+lastdigit);
n=(n/10);}
 return reverse ;}
		string is_palindrome(int n)
		{
		  
int ans=palindrome(n);
if(ans==n)
{return "Yes";}

return "No";
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends