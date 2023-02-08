//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
              int row = n,col=n;
        int zeros = n*n;
        int row_count=0,col_count=0;
        vector<long long int> ans;
        unordered_map<int,int> rowmap;
        unordered_map<int,int> colmap;
        for(int i =0;i<k;i++)
        {
            if(rowmap.find(arr[i][0]-1) == rowmap.end())
            {
                 zeros = zeros - n+col_count;
                 row_count++;
                 rowmap[arr[i][0]-1]=1;
            }
            if(colmap.find(arr[i][1]-1) == colmap.end())
            {
                 zeros = zeros - n+row_count;
                 col_count++;
                  colmap[arr[i][1]-1]=1;
            }
            ans.push_back(zeros);
        }
        return ans;
  }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> arr(k,vector<int>(2));
        for(int i=0;i<k;i++){
            int x, y;
            cin>>x>>y;
            arr[i][0] = x;
            arr[i][1] = y;
        }
        Solution ob;
        vector<long long int> ans = ob.countZero(n,k,arr);
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;    
    }
    
    return 0;
}


// } Driver Code Ends