class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mp;
        for(int i=0;i<arr1.size();i++){
            if(mp.find(arr1[i])==mp.end()){
                mp[arr1[i]]=1;
            }
            else
            mp[arr1[i]]++;
        }
        vector<int>vec;
        for(int j=0;j<arr2.size();j++){
            while(mp[arr2[j]]--){
                vec.push_back(arr2[j]);
            }  
            mp.erase(arr2[j]);
        }
        for(auto &it:mp){
            int k=it.second;
            while(k--){
                vec.push_back(it.first);
            }
        }
        return vec;
    }
};