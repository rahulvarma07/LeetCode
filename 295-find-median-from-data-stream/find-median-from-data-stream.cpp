class MedianFinder {
public:
    priority_queue<int> leftQueue;
    priority_queue<int, vector<int>, greater<int>> rightQueue;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(leftQueue.empty() || num <= leftQueue.top()) {
            leftQueue.push(num);
        }else {
            rightQueue.push(num);
        }

        if(leftQueue.size() > rightQueue.size() + 1) {
            rightQueue.push(leftQueue.top());
            leftQueue.pop();
        }else if(rightQueue.size() > leftQueue.size()) {
            leftQueue.push(rightQueue.top());
            rightQueue.pop();
        }
    }
    
    double findMedian() {
        double ans;
        if(leftQueue.size() == rightQueue.size()) {
            ans = ((leftQueue.top() + rightQueue.top())/2.0);
        }else if(rightQueue.size() > leftQueue.size()){
            ans = rightQueue.top();
        }else {
            ans = leftQueue.top();
        }
        return ans;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */