class MedianFinder {
public:
    priority_queue<double,vector<double>,greater<double>> minheap;
    priority_queue<double> maxheap;
    MedianFinder() {
        
    }
    void addNum(int num) {
        minheap.push(num);
        maxheap.push(minheap.top());
        minheap.pop();
        while(maxheap.size()>minheap.size())
        {
            minheap.push(maxheap.top());
            maxheap.pop();
        }
    }
    
    double findMedian() {
        if(minheap.size()>maxheap.size())
        {
            return minheap.top();
        }
        return (maxheap.top()+minheap.top())/2;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */