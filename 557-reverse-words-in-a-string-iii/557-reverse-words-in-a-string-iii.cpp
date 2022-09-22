class Solution {
public:
    string reverseWords(string s) {
        string str="";
        stack<char>st;
        int i=0;
       for(int i=0;i<=s.size();i++){
            if(s[i]==' ' || i==s.size())
            {
                while(!st.empty()){
                str+=st.top();
                st.pop();
               }
          if(i!=s.size())
             str+=" ";
            continue;
            }
            
            st.push(s[i]);
        }
        return str;
    }
};