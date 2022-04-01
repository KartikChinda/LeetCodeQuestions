class Solution {
public:
    bool isAnagram(string s, string t) {
        char arr[256] = {0};
        if(s.length()!= t.length()) return false;
        
        for(int i = 0; i<s.length();i++){
            arr[s[i]]++;
            arr[t[i]]--;
        }
        
        for(int x:arr){
            if(x != 0) return false;
        }
        return true;
    }
};