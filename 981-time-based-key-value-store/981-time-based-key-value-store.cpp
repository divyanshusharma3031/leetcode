class TimeMap {
public:
    unordered_map<string,map<int,string>> mpp2;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mpp2[key].insert({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        auto it=mpp2[key].upper_bound(timestamp);
        if(it==mpp2[key].begin())
        {
            return "";
        }
        it--;
        return it->second;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */