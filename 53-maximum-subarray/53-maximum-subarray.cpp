class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = nums[0];
        int prevmax = nums[0];
        for(int i = 1; i<nums.size();i++){
            prevmax = max(nums[i], prevmax+nums[i]);
            res = max(res, prevmax);
        }
        
        return res;
    }
};