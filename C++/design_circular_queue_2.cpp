// 非计数法
class MyCircularQueue {
public:
    /** Initialize your data structure here. Set the maxSize of the queue to be k. */
    // int a[1001];
    vector<int> a;
    int maxSize;
    int front, rear; // rear 指向队尾元素的下一个位置
    MyCircularQueue(int k) {
        vector<int> temp(k + 1, 0);
        a = temp;
        maxSize = k + 1;
        front = 0;
        rear = 0;
    }
    
    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value) {
        if ((rear + 1) % maxSize == front) return false;
        a[rear] = value;
        rear = (rear + 1) % maxSize;
        return true;
    }
    
    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue() {
        if (front == rear) return false;
        front = (front + 1) % maxSize;
        return true;
    }
    
    /** Get the front item from the queue. */
    int Front() {
        if (front == rear) return -1;
        return a[front];
    }
    
    /** Get the last item from the queue. */
    int Rear() {
        if (front == rear) return -1;
        int r = rear - 1;
        if (r < 0) r = maxSize - 1;
        return a[r];
    }
    
    /** Checks whether the circular queue is empty or not. */
    bool isEmpty() {
        return front == rear;
    }
    
    /** Checks whether the circular queue is full or not. */
    bool isFull() {
        return (rear + 1) % maxSize == front;
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