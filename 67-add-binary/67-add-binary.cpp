class Solution {
public:
    string addBinary(string a, string b) {
        int sum=0,carry=0;
        string str="";
        int y=a.length()-b.length();
        if(y<0){
            while(y++){
                a='0'+a;
            }
        }
        else if(y>0){
             while(y--){
                b='0'+b;
            }
        }
       for(int k=a.length()-1;k>=0;k--){
           sum=(a[k]-'0')+(b[k]-'0');
           if(sum==0){
               if(carry==1){
               str='1'+str;
               carry=0;
               }
               else{
                   str='0'+str;
               }
           }
           else if(sum==2){
             if(carry==0){
               str='0'+str;
               carry=1;
           }
               else{
                   str='1'+str;
                   carry=1;
               }
           }
           else{
               if(carry==1){
                   str='0'+str;
               }
               else{
                   str='1'+str;
               }
           }
       }
        if(carry==0){
            return str;
        }
        else{
            return '1'+str;
        }
    }
};