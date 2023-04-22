class MedianFinder {
public:
    priority_queue<double> pq;//stores lower half
    priority_queue<double,vector<double>,greater<double>> pq2;//stores upper half
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        pq2.push(num);
        pq.push(pq2.top());
        pq2.pop();
        while(pq.size()>pq2.size())
        {
            pq2.push(pq.top());
            pq.pop();
        }
    }
    
    double findMedian() {
        if(pq.size()==pq2.size())
        {
            return (pq.top()+pq2.top())/2.0;
        }
        return pq2.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */