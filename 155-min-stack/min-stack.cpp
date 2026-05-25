class MinStack {
public:
    stack<int> mainSt;
    stack<int> minVals;
    MinStack() {
        
    }
    
    void push(int val) {
        if(mainSt.size() == 0) {
            mainSt.push(val);
            minVals.push(val);
        }else{
            int minn = min(minVals.top(), val);
            mainSt.push(val);
            minVals.push(minn);
        }
    }
    
    void pop() {
        mainSt.pop();
        minVals.pop();
    }
    
    int top() {
        return mainSt.top();
    }
    
    int getMin() {
        return minVals.top();
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