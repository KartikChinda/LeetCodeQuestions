class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> charMap;
        
        for(int i=0; i<s.size(); i++){
                charMap[s[i]]++;
        }
        int count = 0;
        for(auto it : charMap){
            count+= (it.second/2);
        }
        count*=2;
        if(count%2 == 0){
            if(s.size() > count ){
                count+=1;
            }
        }
        return count;
    }
};