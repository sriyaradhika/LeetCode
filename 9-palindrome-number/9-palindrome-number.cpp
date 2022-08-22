class Solution {
public:
    bool isPalindrome(int x) {
        int n=x;
        int r;
        long long int req=0;
        while(n!=0){
            r=n%10;
            req=req*10+r;
            n/=10;
        }
        if(req==x && x>=0){
            return true;
        }
        else{
            return false;
        }
    }
};