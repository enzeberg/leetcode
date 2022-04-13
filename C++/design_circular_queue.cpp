// 存在删除元素，不严谨
class MyCircularQueue {
public:
    /** Initialize your data structure here. Set the size of the queue to be k. */
    vector<int> a;
    int size;
    MyCircularQueue(int k) {
        size = k;
    }
    
    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value) {
        if (a.size() == size) return false;
        a.push_back(value);
        return true;
    }
    
    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue() {
        if (a.size() == 0) return false;
        a.erase(a.begin());
        return true;
    }
    
    /** Get the front item from the queue. */
    int Front() {
        if (a.size() == 0) return -1;
        return a[0];
    }
    
    /** Get the last item from the queue. */
    int Rear() {
        if (a.size() == 0) return -1;
        return a[a.size() - 1];
    }
    
    /** Checks whether the circular queue is empty or not. */
    bool isEmpty() {
        return a.size() == 0;
    }
    
    /** Checks whether the circular queue is full or not. */
    bool isFull() {
        return a.size() == size;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */