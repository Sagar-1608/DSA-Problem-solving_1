// 225. Implement Stack using Queues

class MyStack {
public:
 queue<int> q; 

    MyStack() {
        
       
        
    }
    
    void push(int x) {
        q.push(x);
        
    }
    
    int pop() {

        int n = q.size();
        int f;

        for(int i =0; i<n-1; i++)
        {
            f= q.front();
            q.pop();
            q.push(f);
        }
        f=q.front();
        q.pop();
        return f;
  
        
    }
    
    int top() {
        return q.back();
        
    }
    
    bool empty() {
        return q.empty();
        
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
