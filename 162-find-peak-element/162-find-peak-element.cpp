class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s = 0;
        int e = nums.size()-1;
        while(s<=e){
            int m = s+(e-s)/2;
            if((m == 0 || nums[m-1]<=nums[m]) && (m == nums.size()-1 || nums[m+1]<=nums[m])){
                return m;
            }
            if(m > 0 && nums[m]<=nums[m-1]){
                e = m-1;
            }else{
                s = m+1;
            }
        }
        return -1;
    }
};