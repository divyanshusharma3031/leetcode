class CustomStack {
public:
    vector<int> stack;
    int i=-1;
    int mx=-1;
    CustomStack(int maxSize) {
        stack.resize(maxSize,0);
        mx=maxSize;
    }
    
    void push(int x) {
        i++;
        if(i>=mx)
        {
            i--;
            return ;
        }
        // cout<<"push at "<<i<<"\n";
        stack[i]=x;
    }
    
    int pop() {
        if(i<0)
        {
            return -1;
        }
        int ele=stack[i];
        i--;
        // cout<<"i after pop "<<i<<"\n";
        return ele;
    }
    
    void increment(int k, int val) {
        if(k>=mx)
        {
            for(int j=0;j<mx;j++)
            {
                stack[j]+=val;
            }
            return;
        }
        for(int j=0;j<k;j++)
        {
            stack[j]+=val;
        }
        return;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */