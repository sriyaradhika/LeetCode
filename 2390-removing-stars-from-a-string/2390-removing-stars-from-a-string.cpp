class Solution {
public:
    string removeStars(string s) {
        int i=0;
        for(auto j:s)
        {
            if(j=='*')
            {
                i--;
            }
            else
            {
                s[i]=j;
                i++;
            }
        }
        return s.substr(0,i);
    }
};