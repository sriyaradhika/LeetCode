class Solution {
public:
    int partitionString(string s) {
        set<char>st;
        int sum=0;
        for(int i=0;i<s.size();i++){
            if(st.find(s[i])!=st.end()){
                sum++;
                st.clear();
            }
            st.insert(s[i]);
        }
        sum++;
        return sum;
    }
};