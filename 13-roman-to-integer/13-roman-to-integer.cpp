class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        for(int i = 0; i<s.length();i++){
            char c = s[i];
            if(c == 'I'){
                if(i<s.length() && s[i+1]=='V'){
                    res+=4;
                    i++;
                }else if(i<s.length() && s[i+1]=='X'){
                    res+=9;
                    i++;
                }else{
                    res++;
                }
            }
            else if(c == 'V') res+=5;
            else if(c == 'X'){
                if(i<s.length() && s[i+1]=='L'){
                    res+=40;
                    i++;
                }else if(i<s.length() && s[i+1]=='C'){
                    res+=90;
                    i++;
                }else{
                    res+=10;
                }
            }
            else if(c == 'L') res+=50;
            else if(c == 'D') res+=500;
            else if(c == 'M') res+=1000;
            else if(c == 'C'){
                if(i<s.length() && s[i+1]=='D'){
                    res+=400;
                    i++;
                }else if(i<s.length() && s[i+1]=='M'){
                    res+=900;
                    i++;
                }else{
                    res+=100;
                }
            }
        }
        return res;
    }
};