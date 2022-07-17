class Solution {
public:
    int firstUniqChar(string s) {
        int countArr[256] = {0};
        for(int i = 0; i<s.length(); i++){
            countArr[s[i]]++;
        }
        
        for(int i = 0; i<s.length(); i++){
            if(countArr[s[i]] == 1) return i;
        }
        
        return -1;
    }
};