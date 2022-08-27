/*Design your implementation of the circular double-ended queue (deque).

Implement the MyCircularDeque class:

MyCircularDeque(int k) Initializes the deque with a maximum size of k.
boolean insertFront() Adds an item at the front of Deque. Returns true if the operation is successful, or false otherwise.
boolean insertLast() Adds an item at the rear of Deque. Returns true if the operation is successful, or false otherwise.
boolean deleteFront() Deletes an item from the front of Deque. Returns true if the operation is successful, or false otherwise.
boolean deleteLast() Deletes an item from the rear of Deque. Returns true if the operation is successful, or false otherwise.
int getFront() Returns the front item from the Deque. Returns -1 if the deque is empty.
int getRear() Returns the last item from Deque. Returns -1 if the deque is empty.
boolean isEmpty() Returns true if the deque is empty, or false otherwise.
boolean isFull() Returns true if the deque is full, or false otherwise.*/
class MyCircularDeque {
public:
    int *arr;
    int front;
    int rear;
    int size;
    MyCircularDeque(int k) {
        this->size=k;
        front=rear=-1;
        arr = new int[size];
    }
    
    bool insertFront(int value) {
        if((rear+1)%size==front)return false;
        else if(front==-1){front=rear=0;}
        else if(front==0 && rear!=size-1)front=size-1;
        else front--;
        arr[front]=value;
        return true;
    }
    
    bool insertLast(int value) {
         if((rear+1)%size==front)return false;
        else if(front==-1)front=rear=0;
        else if(rear==size-1 && front!=0)rear=0;
        else rear++;
        arr[rear]=value;
        return true;
    }
    
    bool deleteFront() {
        if(front==-1)return false;
        else if(front==rear){front=rear=-1;return true;}//if there is only 1 element
        else front = (front+1)%size;
        return true;
    }
    
    bool deleteLast() {
        if(front==-1)return false;
        else if(front==rear){front=rear=-1;return true;}
        else if(rear==0)rear=size-1;
        else rear--;
        return true;
    }
    
    int getFront() {
        if(front==-1)return -1;
        return arr[front];
    }
    
    int getRear() {
        if(front==-1)return -1;
        return arr[rear];
    }
    
    bool isEmpty() {
        if(front==-1)return true;
        return false;
    }
    
    bool isFull() {
        if((rear+1)%size==front)return true;
        return false;
    }
};