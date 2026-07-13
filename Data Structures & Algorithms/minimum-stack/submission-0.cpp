class MinStack {
public:
stack<pair<int,int>>st;
    MinStack() {
        
        
    }
    
    void push(int val) {
        if(st.empty()){
            st.push({val,val});
        }
        else{
            st.push({val,min(val,st.top().second)});
        }
        
    }
    
    void pop() {
            st.pop();
            
        
        
    }
    
    int top() {
        if(st.empty()){
            return 0;
        }
        else{
            return st.top().first;
        }
        
    }
    
    int getMin() {
        if(st.empty()){
            return 0;
        }
        else{
            return st.top().second;
        }
        
    }
};
