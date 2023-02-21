class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int xorRes = 0;
        for(int i = 0; i<nums.size(); i++){
            xorRes = xorRes ^ nums[i];
        }
        
        return xorRes;
        
    }
};