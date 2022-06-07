class RandomizedSet {
public:
    unordered_map<int,int> mpp;
    vector<int> v;
    unordered_map<int,int> key;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mpp.find(val)==mpp.end())
        {
            v.push_back(val);
            mpp[val]=v.size()-1;
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        auto it=mpp.find(val);
        if(it!=mpp.end())
        {
            int x=v.back();
            mpp[x]=mpp[val];
            v[mpp[val]]=x;
            v.pop_back();
            mpp.erase(it);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        int x=rand()%v.size();
        return v[x];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */