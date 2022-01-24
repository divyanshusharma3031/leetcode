class MedianFinder {
public:
    priority_queue<double,vector<double>,greater<double>> minheap;
    priority_queue<double> maxheap;
    MedianFinder() {
        
    }
    void addNum(int num) {
        maxheap.push(num);
        minheap.push(maxheap.top());
        maxheap.pop();
        while(minheap.size()>maxheap.size())
        {
            maxheap.push(minheap.top());
            minheap.pop();
        }
    }
    
    double findMedian() {
        if(maxheap.size()>minheap.size())
        {
            return maxheap.top();
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