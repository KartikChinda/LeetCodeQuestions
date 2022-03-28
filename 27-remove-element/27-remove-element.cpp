class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size() == 0) return 0;
        int end = nums.size()-1;
        if(nums[end] == val) end--;
        int i = 0;
        while(i<=end){
            if(nums[i] == val){
                swap(nums[i], nums[end]);
                end--;
            }else{
                i++;
            }
        }
        
        return i;
    }
};