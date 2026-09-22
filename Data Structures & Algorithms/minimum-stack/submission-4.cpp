class MinStack {
    stack<pair<int,int>> st;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        int min_val = value;
        if(!st.empty())
        {
            min_val = min(min_val, st.top().second);
        }
        st.push({value,min_val});
    }
    
    void pop() {
        if(!st.empty())
            st.pop();
    }
    
    int top() {
        if(!st.empty())
            return st.top().first;
        return 0;
    }
    
    int getMin() {
        if (!st.empty())
            return st.top().second;
        return 0;
    }
};
