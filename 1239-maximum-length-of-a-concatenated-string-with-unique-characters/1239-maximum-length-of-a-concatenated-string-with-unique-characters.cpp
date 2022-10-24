class Solution {
public:
    int maxLength(vector<string>& arr) {
        int n=arr.size(),ans=0;
        for(int i=0;i<(1<<n);i++)
        {
            vector<int>cnt(26);
            int im=0,ok=0;
            for(int j=0;j<n;j++){
                if((i>>j)&1){
                    ok+=arr[j].size();
                    for(auto c:arr[j]){
                        if(cnt[c-'a'])im=1;
                        cnt[c-'a']=1;
                    }
                }
            }
            if(im)continue;
            ans=max(ans,ok);
        }
        return ans;
    }
};