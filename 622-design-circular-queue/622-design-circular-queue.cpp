class MyCircularQueue {
public:
    int *arr;
    int size;
    int front=0;
    int rear=0;
    int rearele=-1;
    MyCircularQueue(int k) {
        arr=new int[k+1];
        size=k+1;
    }
    bool enQueue(int value) {
        if((rear+1)%size==front)
        {
            return false;
        }
        rear=(rear+1)%size;
        arr[rear]=value;
        rearele=arr[rear];
        
        return true;
    }
    
    bool deQueue() {
        if(rear==front)
        {
            return false;
        }
        front=(front+1)%size;
        return true;
    }
    
    int Front() {
        if(rear==front)
        {
            return -1;
        }
        return arr[(front+1)%size];
    }
    
    int Rear() {
         if(rear==front)
        {
            return -1;
        }
        return rearele;
    }
    
    bool isEmpty() {
         if(rear==front)
        {
            return true;
        }
        return false;
    }
    
    bool isFull() {
        if((rear+1)%size==front)
        {
            return true;
        }
        return false;
    }
};