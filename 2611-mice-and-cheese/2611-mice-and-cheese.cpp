class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
              int n=reward1.size();
        vector<pair<int,int>> ans;
        int sum=0;
        for(int i=0;i<reward1.size();i++)
        {
            ans.push_back(make_pair((reward1[i]-reward2[i]),i));
        }
        sort(ans.begin(),ans.end());
        for(int i=n-1;i>=0;i--)
        {
            if(k>0){
                sum+=reward1[ans[i].second];
                k--;
            }
            else{
                sum+=reward2[ans[i].second];
            }
            
        }        
        return sum;
    }
};