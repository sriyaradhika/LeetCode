class SnapshotArray {
public:
    
      
    int sid=0;
    unordered_map<int,vector<pair<int,int>>>mp;
    vector<int>s;
    SnapshotArray(int length) {
       
    }
    
    void set(int index, int val) {
        mp[index].push_back({sid++, val});
    }
    
    int snap() {
        s.push_back(sid-1);
        return s.size()-1;
    }
    
    int get_ind(vector<pair<int,int>>&a,int x) {
       int l=-1,r=a.size();
        while(r>l+1){
            int m=(l+r)/2;
            if(a[m].first<=x){
                l=m;
            }
            else{
                r=m;
            }
        }
        return l;
    }
    int get(int index, int snap_id) {
        int x=s[snap_id];
        auto &v=mp[index];
        int i=get_ind(v,x);
        return i==-1 ? 0:v[i].second;
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */