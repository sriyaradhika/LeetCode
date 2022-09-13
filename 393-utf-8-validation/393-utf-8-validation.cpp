class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int i=0;
        int n=data.size();
        while(i<n){
            int lim=0;
            int num=data[i];
            if(num>=0 && num<=127){
                lim=1;
            }
            else if(num>=192 && num<=223){
                lim=2;
            }
            else if(num>=224 && num<=239){
                lim=3;
                
            }
            else if(num>=240 && num<=247){
                lim=4;
            }
            else{
                return false;
            }
            
            
            if((i+lim)>n){
                return false;
            }
            int ct=lim-1;
            
            while(ct--){
                i++;
                int curr=data[i];
                if(curr<128 || curr>191){
                    return false;
                }
            }
            i++;
            
        }
        return true;
        
    }
};