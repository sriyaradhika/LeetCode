class Solution {
public:
    bool isPerfectSquare(int num) {
       int l=1;
        int h=(1<<31 - 1);
        while(l<h){
            int m=(l+h)/2;
        long long ans=(long long)m*m;
            if(ans==(long long)num)
                return true;
            else if(ans>(long long)num)
                h=m-1;
            else
                l=m+1;
        }
        if((long long)l*l ==(long long)num)
            return true;
        return false;
    }
};