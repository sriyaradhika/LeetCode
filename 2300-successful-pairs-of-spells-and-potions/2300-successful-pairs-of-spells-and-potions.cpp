class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
         vector<int> pairs;
        int m=spells.size();
        int n=potions.size();
        sort(potions.begin(),potions.end());
        for(int i=0;i<m;i++){
            int answer=n;
            int left=0;
            int right=n-1;
            while(left<=right){
                int mid=(left+right)/2;
                long long product=((long long)spells[i]*(long long)potions[mid]);
                if(product>=success){
                    answer=mid;
                    right=mid-1;
                }
                else{
                    left=mid+1;
                }
            }
            pairs.push_back(n-answer);
        }
        return pairs;
    }
};