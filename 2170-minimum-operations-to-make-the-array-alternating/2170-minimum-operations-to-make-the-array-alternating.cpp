class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        map<int,int>mp1;
        map<int,int>mp2;
        int n=nums.size();
        int m1=0,m2=0,c1=0,c2=0;
        int v1=0,v2=0,u1=0,u2=0;
        for(int i=0;i< nums.size();i++){
            if(i%2==0){
                mp1[nums[i]]++;
                if(mp1[nums[i]]>m1){
                    m1=mp1[nums[i]];
                    v1=nums[i];
                }
                else if(mp1[nums[i]]>c1){
                    c1=mp1[nums[i]];
                    u1=nums[i];
                }
            }
            else{
                mp2[nums[i]]++;
                if(mp2[nums[i]]>m2){
                    m2=mp2[nums[i]];
                    v2=nums[i];
                }
                else if(mp2[nums[i]]>c2){
                    c2=mp2[nums[i]];
                    u2=nums[i];
                }
            }
        }
        if(v1!=v2){
            return n-m1-m2;
        }
        else{
            if(m1>m2){
                if(m1+c2>=m2+c1){
                return n-m1-c2;
                }
                else{
                    return n-m2-c1;
                }
            }
            else if(m1==m2){
                if(v1==v2){
                    if(m1==c2){
                        return n-m1-c2;
                    }
                    else if(m2==c1){
                        return n-m2-c1;
                    }
                    else if(v1==u2){
                        if(m1+c2>=m2+c1){
                         return n-m1-c2;
                         }
                        else{
                          return n-m2-c1;
                        }
                     }
                    else if(v2==u1){
                         if(m2+c1 >=m1+c2){
                           return n-m2-c1;
                         }
                         else{
                           return n-m1-c2;
                         }
                        return n-m2-c1;
                      }
                    else{
                        if(c2>=c1){
                       return n-m1-c2;
                      }
                    else{
                        return n-m2-c1;
                    }
                    }
                    }
                }              
            else{
                return n-m2-c1;
            }
        }
        return 0;
    }
};