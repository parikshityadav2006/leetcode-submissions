// Title: Daily Temperatures
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/daily-temperatures/

    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        vector<int> res(temperatures.size());
        st.push(0);

        for(int i=1;i<temperatures.size();i++){
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                res[st.top()] = i-st.top();
                st.pop();
            }
            st.push(i);
           
        }
        while(!st.empty()){
            res[st.top()] = 0;
            st.pop();
