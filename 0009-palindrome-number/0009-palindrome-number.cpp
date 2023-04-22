class Solution {
public:
    bool isPalindrome(int x) {
        long int num=0;
        int v=x;
        if(x<0)
        {
            return false;
        }
        while(x>0)
        {
            num=num*10;
            num+=x%10;
            x=x/10;
        }
        if(v!=num)
        {
            return false;
        }
        return true;
    }
};