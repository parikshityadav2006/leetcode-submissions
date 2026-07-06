// Title: Valid Parentheses
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/valid-parentheses/


            return true;
        while (i < s.size()) {
                i++;
                stk.push(s[i]);
            } else {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                if(stk.empty())return false;
                    stk.pop();
        if (stk.empty())
                    i++;
                    return false;
                } else {
                }
            }
        }
        else
            return false;
    }
        int i = 0;
        stack<char> stk;

                    (stk.top() == '[' && s[i] == ']') ||
                    (stk.top() == '{' && s[i] == '}')) {
                if ((stk.top() == '(' && s[i] == ')') ||
};
