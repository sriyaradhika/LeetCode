//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long jumpingNums(long long x) {
        // code here
        if(x<=9){
            return x;
        }
        long long maxi=INT_MIN;
        queue<long long>q;
        for(int i=0;i<=9;i++){
            q.push(i);
            while(!q.empty()){
                long long num=q.front();
                q.pop();
                if(num<=x){
                    maxi=max(maxi,num);
                    
                    long long rem=num%10;
                    long long a=num*10 + rem-1;
                    long long b=num*10 + rem+1;
                    
                    if(rem==0){
                        if(b<=x){
                            q.push(b);
                        }
                    }
                        else if(rem==9){
                            if(a<=x){
                                q.push(a);
                            }
                        }
                        else{
                            if(a<=x){
                                q.push(a);
                            }
                            if(b<=x){
                                q.push(b);
                            }
                        }
                    
                }
            }
        }
        return maxi;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.jumpingNums(X) << endl;
    }
    return 0;
}
// } Driver Code Ends