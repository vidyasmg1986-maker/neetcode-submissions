class MinStack {
public:
    vector<int> st;
    MinStack() {
    }
    
    void push(int val) {
        st.push_back(val);
    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() {
        return st[st.size()-1];
    }
    
    int getMin() {
        int min = INT_MAX;
        for(int i : st){
            if(i<min){
                min = i;
            }
        }
        return min;
    }
};
