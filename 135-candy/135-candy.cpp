class Solution {
public:
    int candy(vector<int>& candy) {
//         int n=ratings.size();
//         int sum = 0;
//          int ans[n];
//          if (n == 1) {
//          return 1;
//           }

//     for (int i = 0; i < n; i++)
//           ans[i] = 1;

//     for (int i = 0; i < n - 1; i++) {
//         if (ratings[i + 1] > ratings[i]) {
//            ans[i + 1] = ans[i] + 1;
//          }
//     }

//     for (int i = n - 2; i >= 0; i--) {
//        if (ratings[i] > ratings[i + 1] && ans[i] <= ans[i + 1]) {
//            ans[i] = ans[i + 1] + 1;
//         }
//       sum += ans[i];
//      }
//     sum += ans[n - 1];
//     return sum;
//     }
int n = candy.size();
vector<int>dp(n,1); // since all need 1 candy atleast ;
if(n==1) return dp[0];
//Making left side count ;
for(int i =1;i<n;i++)
{
if(candy[i]>candy[i-1])
{
dp[i]=dp[i-1]+1; //since ratting is high you need to give more candy ;
}
}
//right to left
for(int i =n-2;i>=0;i--)
{
if(candy[i+1]<candy[i])dp[i]=max(dp[i+1]+1,dp[i]);
}
int sum=0;
for(auto x:dp)
{
sum+=x;
}
return sum;
}
};