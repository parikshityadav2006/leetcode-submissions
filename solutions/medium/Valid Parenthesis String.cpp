// Title: Valid Parenthesis String
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/valid-parenthesis-string/

            if(s[i]=='('){
                leftBracket.push(i);
            }
            else if(s[i]==')'){
                if(leftBracket.empty()){
                    if(asterisk.empty())return false;
                    else asterisk.pop();
                }
                else leftBracket.pop();
            }
            else{
                asterisk.push(i);
            }
            i++;  
        }

                asterisk.pop();
            }
                leftBracket.pop();
            if(asterisk.empty())return false;
        while(!leftBracket.empty()){
            if(asterisk.top()>leftBracket.top()){
        //handling unprocessed left brackets
            else return false;
        }
        return true;
    }
};
