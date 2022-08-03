class MyCalendar {
public:
    map<int,int> mpp;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        auto it=mpp.upper_bound(start);
        if(it!=mpp.end() && (it->second)<end)
        {
            return false;
        }
        mpp.insert({end,start});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */