/*Implement a first in first out (FIFO) queue using only two stacks. The implemented queue should support all the functions of a normal queue (push, peek, pop, and empty).*/
class MyQueue {
public:
    stack<int>s1,s2;
    void push(int x) {
        s1.push(x);
        
    }
    
    int pop() {
        int size=s1.size();
        while(size!=1){
            int num=s1.top();
            s2.push(num);
            s1.pop();
            size--;
            
            
        }
        int save=s1.top();
        s1.pop();
        while(!s2.empty())
        {
            int num=s2.top();
            s1.push(num);
            s2.pop();
        }
        return save;
        
    }
    
    int peek() {
            int size=s1.size();
        while(size!=1){
            int num=s1.top();
            s2.push(num);
            s1.pop();
            size--;
            
            
        }
        int save=s1.top();
       
        while(!s2.empty())
        {
            int num=s2.top();
            s1.push(num);
            s2.pop();
        }
        return save;
        
    }
    
    bool empty() {
        return s1.empty();
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */