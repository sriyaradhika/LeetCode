class Solution {
public:
    int maxVowels(string s, int k) {
        int maxi=0,cnt=0;
        set<char>st;
        st.insert('a');
        st.insert('e');
        st.insert('i');
        st.insert('o');
        st.insert('u');
        queue<char>q;
        for(int i=0;i<k;i++){
            q.push(s[i]);
            if(st.find(s[i])!=st.end()){
                cnt++;
            }
        }
        maxi=cnt;
        for(int i=k;i<s.size();i++){
            char d=q.front();
            q.pop();
            if(st.find(d)!=st.end()){
                cnt--;
            }
            q.push(s[i]);
            if(st.find(s[i])!=st.end()){
                cnt++;
            }
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};