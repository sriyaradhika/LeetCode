class Solution {
public:
       vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry=0;
        int n=num.size();
        for(int i=n-1;i>=0 ;i--)
        {
            int temp=carry+(k%10)+num[i];
            carry=temp/10;
            num[i]=temp%10;
            k=k/10;
        }
        while(k) 
        {
            int temp=(k%10)+carry;
            num.insert(num.begin(),temp%10);
            carry=temp/10;
            k/=10;
        }
        if(carry >0) num.insert(num.begin(),carry); 
        return num;
    }
};