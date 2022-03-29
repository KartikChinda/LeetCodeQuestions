class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res = digits;
        reverse(res.begin(), res.end());
        int i = 0;
        while(i<res.size()-1 && res[i]==9){
            res[i] = 0;
            i++;
        }
        if(res[i] == 9){
            res[i] = 0;
            res.push_back(1);
        }
        else{
            res[i]++;
        }
        reverse(res.begin(), res.end());
        return res;
        
    }
};