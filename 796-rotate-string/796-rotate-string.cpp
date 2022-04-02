class Solution {
public:
    bool rotateString(string s1, string goal) {
        if(s1.length() != goal.length()) return false;
        return (s1+s1).find(goal) != string::npos;
    }
};