//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
       string caseSort(string str, int n)

    {

        string capital,small;

        for(char c:str){

            if(c>='a'){

                small.push_back(c);

            }

            else{

                capital.push_back(c);

            }

        }

        sort(small.begin(),small.end());

        sort(capital.begin(),capital.end());

        int x=0, y = 0;

        for(int i=0;i<n;i++){

            if(str[i]>='a'){

                str[i] = small[x++];

            }

            else{

                str[i] = capital[y++];

            }

        }

        return str;

    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends