//{ Driver Code Starts
//Initial Template for CPP

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long maxTripletProduct(long long arr[], int n)
    {
     if (n < 3)
        return -1;
 
     long long maxA = INT_MIN, maxB = INT_MIN, maxC = INT_MIN;
 
    long long minA = INT_MAX, minB = INT_MAX;
 
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxA)
        {
            maxC = maxB;
            maxB = maxA;
            maxA = arr[i];
        }
 
        else if (arr[i] > maxB)
        {
            maxC = maxB;
            maxB = arr[i];
        }
 
        else if (arr[i] > maxC)
            maxC = arr[i];
 
        if (arr[i] < minA)
        {
            minB = minA;
            minA = arr[i];
        }
        else if(arr[i] < minB)
            minB = arr[i];
    }
 
    return max(minA * minB * maxA,
               maxA * maxB * maxC);
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n; long long arr[n];
	    for(i=0;i<n;i++)
	    cin>>arr[i];
	    Solution ob;
	    cout <<ob.maxTripletProduct(arr, n);
	    cout<<"\n";
	}
    return 0;
}
// } Driver Code Ends