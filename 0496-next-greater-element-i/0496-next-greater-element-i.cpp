class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        stack<int>st;
        unordered_map<int,int>mp;
        for(int i=n-1;i>=0;i--){
            mp[nums2[i]]=i;
            int cur=nums2[i];
            while(!st.empty() && st.top()<=cur){
                st.pop();
            }
              nums2[i]=st.empty()?-1:st.top();  
            st.push(cur);
        }
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            ans.push_back(nums2[mp[nums1[i]]]);
        }
        return ans;
    }
};