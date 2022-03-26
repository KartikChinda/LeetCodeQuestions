class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int fin = 1;
        for(int i = 1; i<nums.size();i++){
            if(nums[i] != nums[fin-1]){
                nums[fin] = nums[i];
                fin++;
            }
        }
        
        return fin;
    }
};