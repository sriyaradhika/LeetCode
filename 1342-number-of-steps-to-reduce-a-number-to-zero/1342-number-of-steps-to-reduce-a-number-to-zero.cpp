class Solution {
public:
    int f(int n,int st){
        if(n==0){
            return st;
        }
        if(n%2==0){
            return f(n/2,st+1);
        }
       
           return f(n-1,st+1);
        
    }
    int numberOfSteps(int num) {
        return f(num,0);
    }
};