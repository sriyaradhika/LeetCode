class Solution {
public:
    int reachNumber(int target) {
        int t=abs(target);
        int s=0,st=0;
        while(s<t){
            st++;
            s+=st;
        }
        while((s-t)%2!=0){
            st++;
            s+=st;
        }
        return st;
    }
};