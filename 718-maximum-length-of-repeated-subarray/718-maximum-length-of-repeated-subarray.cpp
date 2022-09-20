class Solution {
public:
    int findLength(vector<int>& n1, vector<int>& n2) {
      int ptr2=0,ptr1=0;
        int cnt=0;
        int maxi=INT_MIN;
        for(int i=0;i<n1.size();i++){
            cnt=0;
            for(int j=i,ptr2=0;j<n1.size()&&ptr2<n2.size();j++,ptr2++){
                if(n1[j]==n2[ptr2]){
                    cnt++;
                }
                else{
                    cnt=0;
                }
                maxi=max(cnt,maxi);
            }
        }
        for(int i=0;i<n2.size();i++){
            cnt=0;
            for(int j=i,ptr1=0;j<n2.size()&&ptr1<n1.size();j++,ptr1++){
                if(n2[j]==n1[ptr1]){
                    cnt++;
                }
                else{
                    cnt=0;
                }
                maxi=max(cnt,maxi);
            }
        }
        return maxi;
    }
};