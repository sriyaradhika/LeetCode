class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int>s;
        int n=a.size();
        for(int i=0;i<n;i++){
            if(a[i]>0 || s.empty())
                s.push(a[i]);
            else{
                while(s.size() && s.top()>0 && s.top()<abs(a[i]))
                    s.pop();
                if(s.size() && s.top()==abs(a[i]))
                    s.pop();
                else if(s.empty() || s.top()<0)
                    s.push(a[i]);
            }
        }
        vector<int>res;
        while(s.size())
        {  res.push_back(s.top());
         s.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};