class Solution {
public:
    
    bool util(string &str, int st, int e){
        if(st>=e) return true;
        if(str[st] != str[e]) return false;
        else{
            return util(str, st+1, e-1);
        }
    }
    
    
    bool isPalindrome(string s) {
        int st = 0;
        
        string str = "";
        for(int i = 0; i<s.length(); i++){
            if(s[i]>=48 && s[i]<=57){
                str += s[i];
            }
            if((s[i]>= 97 && s[i]<=122) || (s[i]>=65 && s[i]<=90)){
                str += tolower(s[i]); 
            }
            else{
                continue;
            }
        }
        cout<<str;
        int e = str.length()-1;
        
        return util(str, st, e);
    }
};