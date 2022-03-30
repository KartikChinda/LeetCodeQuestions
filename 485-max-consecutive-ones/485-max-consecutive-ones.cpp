class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currentCount = 0;
        int res = 0;
        
        for(int i = 0; i<nums.size();i++){
            if(nums[i] == 1){
                currentCount++;
                res = max(res, currentCount);
            }
            else{
                currentCount = 0;
            }
        }
        
        return res;
    }
};