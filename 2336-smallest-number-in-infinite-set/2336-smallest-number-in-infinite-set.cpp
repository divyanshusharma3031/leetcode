class SmallestInfiniteSet {
public:
    set<int> removed;
    int mn;
    SmallestInfiniteSet() {
        mn=1;
    }
    int popSmallest() {
        removed.insert(mn);
        int ans=mn;
        while(removed.find(mn)!=removed.end())
        {
            mn++;
        }
        return ans;
    }
    void addBack(int num) {
        if(num<mn)
        {
            mn=num;
        }
        auto it=removed.find(num);
        if(it!=removed.end())
        {
            removed.erase(removed.find(num));   
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */