class MedianFinder {
public:
    priority_queue<double> maxheap; // stores lower half and returns max of min
    priority_queue<double,vector<double>,greater<double>> minheap;
    MedianFinder() {
        
    }
    void addNum(int num) {
        if(maxheap.empty() || maxheap.top()>num)
            maxheap.push(num);
        else
            minheap.push(num);
        while((maxheap.size()+1)<minheap.size())
        {
            maxheap.push(minheap.top());
            minheap.pop();
        }
        while((minheap.size()+1)<maxheap.size())
        {
            minheap.push(maxheap.top());
            maxheap.pop();
        }
    } 
    double findMedian() {
        if(minheap.size()==maxheap.size())
        {
            return (minheap.top()+maxheap.top())/2;
        }
        if(minheap.size()>maxheap.size())
        {
            return minheap.top();
        }
        return maxheap.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */