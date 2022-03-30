class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int min = prices[0];
        for(int i = 0; i<prices.size();i++){
            res = std::max(res, prices[i]-min);
            min = std::min(min, prices[i]);
        }
        
        return res;
    }
};