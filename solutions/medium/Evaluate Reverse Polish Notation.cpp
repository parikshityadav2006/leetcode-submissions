// Title: Evaluate Reverse Polish Notation
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/evaluate-reverse-polish-notation/

                string operand_1 = st.top();
                st.pop();

                int res;
                int a = stoi(operand_1);
                int b = stoi(operand_2);

                if (tokens[i] == "+")
                    res = a + b;
                if (tokens[i] == "-")
                    res = a - b;
                if (tokens[i] == "/")
                    res = a / b;
                if (tokens[i] == "*")
                    res = a * b;

                st.pop();
                string operand_2 = st.top();
            } else {
                st.push(tokens[i]);
            if (find(ops.begin(),ops.end(),tokens[i])==ops.end()) {
        for (int i = 0; i < tokens.size(); i++) {
        if(tokens.size()==1)return stoi(tokens[0]);
        
        
        vector<string> ops={"+","-","/","*"};
        stack<string> st;
    int evalRPN(vector<string>& tokens) {
public:
class Solution {
