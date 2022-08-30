class Solution {
public:
    int start=0;
    string getel(string path){
        string element="";
        int idx=start;
        while(idx>=0){
            if(path[idx]=='/'){
                idx--;
                break;
            }
            else {
                element=path[idx]+element;
                idx--;
            }
        }
        start=idx;
        return element;
    }
    string simplifyPath(string path) {
       string crct="";
        start=path.length()-1;
        int skip=0;
        while(start>=0){
            string ele=getel(path);
            if(ele.empty()|| ele=="."){
                continue;
            }
            else if(ele==".."){
                skip++;
            }
       else{
           if(skip>0){
               skip--;
               continue;
           }
           else{
               crct="/"+ele+crct;
           }
       }
    }
        return crct.length()>0?crct:"/";
    }
};