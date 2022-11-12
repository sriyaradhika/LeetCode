//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	bool valid(unordered_map<char,int>&mp,int k)

  {

      int mx=0,all=0;

      for(auto val:mp)

      {

          mx=max(val.second,mx);

          all+=val.second;

      }

      return (all-mx)<=k;

  }

  int characterReplacement(string s, int k){

      // Code here

      unordered_map<char,int> mp;

      int start=0,ans=0,n=s.size();

      for(int i=0;i<n;i++)

      {

          mp[s[i]]++;

          while(!valid(mp,k))

              mp[s[start++]]--;

          ans=max(ans,i-start+1);

      }

      return ans;

  }

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		int k;
		cin >> k;
		Solution obj;
		int ans = obj.characterReplacement(s, k);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends