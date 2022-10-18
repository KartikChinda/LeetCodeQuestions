class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res; 
        if(n == 0){
            res.push_back(0);
            return res; 
        }
        else if(n == 1){
            res.push_back(0);
            res.push_back(1);
            return res; 
        }
        else{
            res.push_back(0);
            res.push_back(1);
            for(int i = 2; i<=n; i++){
                if(i%2 == 0){
                    res.push_back(res[i/2]); 
                }else{
                    res.push_back((res[i/2]+1));
                }
            }
        }
        
        return res; 
    }
};