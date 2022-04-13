class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> data;
    int minIndex = 0;
    int begin = 1;
    MinStack() {
        
    }
    
    void push(int x) {
        data.push_back(x);
    }
    
    void pop() {
        data.pop_back();
        if (begin > 0) {
            begin--;
        }
        // if (begin)
    }
    
    int top() {
        return data[data.size() - 1];
    }
    
    int getMin() {
        if (begin <= minIndex) {
            minIndex = 0;
            begin = 1;
        }
        int min = data[minIndex];
        int i;
        for (i = begin; i < data.size(); ++i) {
            if (data[i] < min) {
                min = data[i];
                minIndex = i;
            }
        }
        begin = i;
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */