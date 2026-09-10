class MyCircularQueue {
public:
    vector<int> arr;
        int front = 0 ;
        int rear = 0;
        int size = 0;
        int capacity = 0;
    MyCircularQueue(int k) {
        arr.resize(k);
        size = k;
        front  = front%size;
        rear = rear%size;
    }
    
    bool enQueue(int value) {
    if(isFull()){
        return false;
    }    
    rear = rear%size;
    arr[rear] = value;
    rear++;
    capacity++;
    return true;
    }
    
    bool deQueue() {
    if(isEmpty()){
        return false;
    }
    front = front%size;
    arr[front] = 0;
    front++;
    capacity--;
    return true;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        return arr[front%size];
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        return arr[(rear-1+size)%size];
    }
    
    bool isEmpty() {
        if(capacity == 0) return true;
        else return false;
    }
    
    bool isFull() {
        if(capacity == size) return true;
        else return false;
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