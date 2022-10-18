class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int x = 0, y = 0; 
        for(int i = 0; i<s.length(); i++){
            char c = s[i];
            if(c == '#'){
                x--;
                x = max(0, x); 
            }else{
                swap(s[i], s[x]);
                x++; 
            }
        }
        
        for(int i = 0; i<t.length(); i++){
            char c = t[i];
            if(c == '#'){
                y--;
                y = max(0, y); 
            }else{
                swap(t[i], t[y]);
                y++; 
            }
        }
        
        if(x != y) return false; 
        for(int i = 0; i<x; i++){
            if(s[i] != t[i]) return false; 
        }
        
        return true; 
        
    }
};