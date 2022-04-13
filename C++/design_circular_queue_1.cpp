// ¼ÆÊý·¨
class MyCircularQueue {
public:
    /** Initialize your data structure here. Set the maxSize of the queue to be k. */
    // int a[1000];
    vector<int> a;
    int maxSize, size;
    int front, rear;
    MyCircularQueue(int k) {
        vector<int> temp(k, 0);
        a = temp;
        maxSize = k;
        size = 0;
        front = 0;
        rear = -1;
    }
    
    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value) {
        if (size == maxSize) return false;
        rear = (rear + 1) % maxSize;
        a[rear] = value;
        size++;
        return true;
    }
    
    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue() {
        if (size == 0) return false;
        front = (front + 1) % maxSize;
        size--;
        return true;
    }
    
    /** Get the front item from the queue. */
    int Front() {
        if (size == 0) return -1;
        return a[front];
    }
    
    /** Get the last item from the queue. */
    int Rear() {
        if (size == 0) return -1;
        return a[rear];
    }
    
    /** Checks whether the circular queue is empty or not. */
    bool isEmpty() {
        return size == 0;
    }
    
    /** Checks whether the circular queue is full or not. */
    bool isFull() {
        return size == maxSize;
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