class Solution {
public:
    bool isValid(string str) {
        stack<char> s;
        for(int i = 0; i<str.length();i++){
            char c = str[i];

            if(c == '(' || c == '{' || c=='['){
                s.push(c);
            }else{
                 if(s.empty()){
                return false;
            }
                else if(c == ')'){
                    if(s.top() != '('){
                        return false;
                    }else{
                        s.pop();
                    }
                }
                else if(c == '}'){
                    if(s.top() != '{'){
                        return false;
                    }else{
                        s.pop();
                    }
                }
                else if(c==']'){
                    if(s.top() != '['){
                        return false;
                    }else{
                        s.pop();
                    }
                }
            }
        }
        
        if(s.empty()){
            return true;
        }
        
        return false;
    }
};