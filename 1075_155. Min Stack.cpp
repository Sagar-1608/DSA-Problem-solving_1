// 155. Min Stack


// by using two stack 
// one stack is for real stack implementation 
// and another for storing the min value for each element 


class MinStack {

    stack<int> arr;
    stack<int> minval;

public:
    MinStack() {
   
    }
    
    void push(int val) {
        if(arr.empty())
        {
            minval.push(val);
        }
        if(val<minval.top())
        {
            minval.push(val);
        }
        else
        {
            minval.push(minval.top());
        }
         arr.push(val);

        
    }
    
    void pop() {

        if(!arr.empty()) 
        {
            arr.pop();
            minval.pop();
        }
        
    }
    
    int top() {
        
            return arr.top();
    
        
    }
    
    int getMin() {
        return minval.top();
    }
};




// using only one stack

/*
class MinStack {

    stack<int> arr;
    int mini;

public:
    MinStack() {

   
    }
    
    void push(int val) {
        if(arr.empty())
        {
            arr.push(val);
            mini = val;
        }
        else
        {
            if(val<mini)
           { 
            long long  curr = 2*val-mini;
            arr.push(curr);
            mini = val;
           }
           else
           {
               arr.push(val);
           }
           
        }

        
    }
    
    void pop() {

        int curr=arr.top();
        arr.pop();

        if(curr<mini)
        {
            long long prevmini = mini;
            long long  val = 2*mini-curr;
            mini = val;
           
        }
        
    }
    
    int top() {
        
            return arr.top();
    
        
    }
    
    int getMin() {
        return mini;
    }
};


*/
