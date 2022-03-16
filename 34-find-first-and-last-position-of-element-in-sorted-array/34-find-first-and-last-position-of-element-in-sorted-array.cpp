class Solution {
public:
    
    int firstOccurance(vector<int> nums, int target){
        int s = 0;
        int e = nums.size()-1;
        int ans = -1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(target > nums[mid]) s = mid+1;
            else if(target < nums[mid]) e = mid-1;
            else{
                ans = mid;
                if(mid == 0 || nums[mid] != nums[mid-1]){
                    return ans;
                }else{
                    e = mid-1;
                }
                
            }
        }
        return ans;
    }
    
    int lastOccurance(vector<int> nums, int target){
        int s = 0; 
        int e = nums.size() -1;
        int ans = -1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(target>nums[mid]) s = mid+1;
            else if(target<nums[mid]) e = mid-1;
            else{
                ans = mid;
                s = mid+1;
            }
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int start = firstOccurance(nums, target);
        if(start == -1){
            res.push_back(-1);
            res.push_back(-1);
            return res;
        }
        if(nums.size() == 1){
            res.push_back(0);
            res.push_back(0);
            return res;
        }
        
        int end = lastOccurance(nums, target);
        res.push_back(start);
        res.push_back(end);
        return res;
        
    }
};