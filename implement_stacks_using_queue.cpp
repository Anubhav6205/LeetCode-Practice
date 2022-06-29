/*Implement a last-in-first-out (LIFO) stack using only two queues. The implemented stack should support all the functions of a normal stack (push, top, pop, and empty).*/
class MyStack {
public:
   queue<int>q1,q2;
    
    void push(int x) {
        int size=q1.size();
        q1.push(x);
        while(size!=0)
        {
            int num=q1.front();
            q1.pop();
            q1.push(num);
            size--;
        }
        
    }
    
    int pop() {
        int num=q1.front();
        q1.pop();
        return num;
        
        
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */