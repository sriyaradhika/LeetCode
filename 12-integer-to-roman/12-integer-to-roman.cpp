class Solution {
public:
    string intToRoman(int num) {
        string sym[13]=        {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        int val[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string str="";
        for(int i=0;i<13 && num>0;i++){
            while(val[i]<=num){
                num-=val[i];
                str+=sym[i];
            }
        }
        return str;
    }
};