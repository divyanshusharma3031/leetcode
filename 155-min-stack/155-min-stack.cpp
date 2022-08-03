class MinStack {
public:
    multiset<int> s;
    stack<int> st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        s.insert(val);
    }
    
    void pop() {
        int t=st.top();
        auto it=s.find(t);
        if(it!=s.end())
        {
            s.erase(it);
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return *(s.begin());
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */