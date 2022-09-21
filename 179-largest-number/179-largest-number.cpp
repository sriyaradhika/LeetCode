class Solution {
public:
    static bool c_cmp(string a,string b){
        if(a+b>b+a) return true;
        return false;
    }
    string largestNumber(vector<int>& nums) {
        string ans;
        vector<string>c;
        for(auto x:nums){
            c.push_back(to_string(x));
        }
        sort(c.begin(),c.end(),c_cmp);
        for(auto x:c){
            ans.append(x);
        }
        int i=0;
        while(ans[i]=='0' && i<ans.size()-1){
            i++;
        }
        return ans.substr(i);
    }
};