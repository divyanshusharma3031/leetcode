class LRUCache {
public:
    int size=0;
    list<int> recent;
    unordered_map<int,int> mpp;
    unordered_map<int,list<int>::iterator> pos;
    void use(int key)
    {
        if(pos.find(key)!=pos.end())
        {
            recent.erase(pos[key]);
        }
        else if(recent.size()>=size)
        {
            int old=recent.back();
            recent.pop_back();
            pos.erase(old);
        }
        recent.push_front(key);
        pos[key]=recent.begin();
    }
    LRUCache(int capacity) {
        size=capacity;
    }
    
    int get(int key) {
        if(pos.find(key)!=pos.end())
        {
            use(key);
            return mpp[key];
        }
        return -1;
        
    }
    
    void put(int key, int value) {
        use(key);
        mpp[key]=value;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */