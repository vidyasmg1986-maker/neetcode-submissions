class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0);   // result initialized with 0s
        stack<int> st;           // stack to store indices

        for(int i = 0; i < n; i++) {
            // while current temp is warmer than the temp at stack top
            while(!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int idx = st.top();
                st.pop();
                ans[idx] = i - idx;  // distance to next warmer day
            }
            st.push(i);  // push current index
        }

        return ans;
    }
};
