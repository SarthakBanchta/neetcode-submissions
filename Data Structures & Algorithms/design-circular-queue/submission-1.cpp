class MyCircularQueue {
public:
    int f; 
    int r; 
    int size; 
    int* v; 
    MyCircularQueue(int k) {
        f = -1;
        r = -1;
        size = k;
        v = new int[k];
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        if(isEmpty()){
            r++;
            f++;
        }else{
            r = (r+1)%size;
        }
        v[r] = value;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        if(f == r){
            r = -1;
            f = -1;
        }else {
            f = (f+1)%size;
        }
        return true;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        return v[f];
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        return v[r];
    }
    
    bool isEmpty() {
        if(f == -1 && r == -1) return true;
        return false;
    }
    
    bool isFull() {
        return ((r+1)%size) == f;
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