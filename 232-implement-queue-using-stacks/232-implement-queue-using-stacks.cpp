class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    int peak=-1;
    MyQueue() {
    }
    void push(int x) {
        if(peak==-1)
        {
            peak=x;
        }
        s1.push(x);
    }
    int pop() {
       while(!s1.empty())
       {
           s2.push(s1.top());
           s1.pop();
       }
        int x=s2.top();
        s2.pop();
        if(s2.empty())
        {
            peak=-1;
        }
        else
        {
            peak=s2.top();
        }
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        return x;
    }
    
    int peek() {
        return peak;
    }
    
    bool empty() {
        return s1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */