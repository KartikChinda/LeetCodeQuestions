class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int auxArr[26] = {0};
        for(int i = 0; i<magazine.length(); i++){
            auxArr[magazine[i]-'a']++;
        }
        for(int i = 0; i<ransomNote.length(); i++){
            auxArr[ransomNote[i]-'a']--;
        }
        for(int i = 0; i<26; i++){
            if(auxArr[i] < 0) return false;
        }
        
        return true;
    }
};