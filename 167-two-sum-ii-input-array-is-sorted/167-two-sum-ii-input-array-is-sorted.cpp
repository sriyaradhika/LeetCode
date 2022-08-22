class Solution {
public:
    vector<int> twoSum(vector<int>& num, int k) {
        int l=0,r=num.size()-1;
       while(l<r){
           int sum=num[l]+num[r];
           if(sum==k)
               return {l+1,r+1};
           else if(sum>k)
               r--;
           else
               l++;
       }
        return {0,1};
    }
};