class Solution {
public:
    
    void util(string digits, string output, int index, string mapping[], vector<string> &res){
//         base condition 
        if(index>=digits.length()){
            if(output.length()>0){
                res.push_back(output);
            }
            return;
        }
        
        int value = digits[index] - '0';
        string valueString = mapping[value];
        for(int i = 0; i<valueString.length();i++){
            output.push_back(valueString[i]);
            util(digits, output, index+1, mapping, res);
            output.pop_back();
        }
        
        
    }
    
    
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        string output = "";
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        int index = 0;
        util(digits, output, index, mapping, res);
        
        return res;
        
    }
};