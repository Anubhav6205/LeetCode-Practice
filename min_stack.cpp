class MinStack {
public:
   
    
    vector<int>v;
    
    void push(int val) {
        v.push_back(val);
    }
    
    void pop() {
        v.pop_back();
        
    }
    
    int top() {
        return v[v.size()-1];
        
    }
    
    int getMin() {
         return *min_element(v.begin(), v.end());
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 * 
 * Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Implement the MinStack class:

MinStack() initializes the stack object.
void push(int val) pushes the element val onto the stack.
void pop() removes the element on the top of the stack.
int top() gets the top element of the stack.
int getMin() retrieves the minimum element in the stack.
 */