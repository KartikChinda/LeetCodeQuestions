class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        
        for(int i = 0; i<strs[0].size(); i++){
            char ch = strs[0][i];
            for(string s : strs){
                if(s.size() == i || s[i] != ch){
                    return ans;
                }      
            }
            ans += ch;
        }
        
        return ans;
    }
};