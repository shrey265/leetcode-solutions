class MyQueue {
    stack<int> st_a, st_b;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!st_b.empty()){
            st_a.push(st_b.top());
            st_b.pop();
        }
        st_a.push(x);
        while(!st_a.empty()){
            st_b.push(st_a.top());
            st_a.pop();
        }
            
    }
    
    int pop() {
        int a = st_b.top();
        st_b.pop();
        return a;
    }
    
    int peek() {
        return st_b.top();
    }
    
    bool empty() {
        return st_b.empty();
    }
};
