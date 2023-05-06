class Solution {
public:

    int numSubseq(vector<int>& nums, int t) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        int mod=1e9+7;
        int res=0;
        vector<int> pow(nums.size(),1);
        for(int i=1;i<=j;i++){
            pow[i]=pow[i-1]*2 % mod;
        }
        while(i<=j){
            if(nums[i]+nums[j]>t){
                j--;
            }
            else{
                res=(res+pow[j-i++])%mod;
            }
        }
        return res;
    }
};