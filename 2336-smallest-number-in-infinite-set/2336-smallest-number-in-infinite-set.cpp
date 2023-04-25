class SmallestInfiniteSet {
public:
     map<int,int>mp;
    SmallestInfiniteSet() {
        for(int i=1;i<=1000;i++){
            mp[i]=1;
        }
    }
    
    int popSmallest() {
        map<int,int>::iterator it=mp.begin();
        int x=it->first;
        mp.erase(x);
        return x;
    }
    
    void addBack(int num) {
        if(mp.find(num)==mp.end()){
            mp[num]=1;
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */