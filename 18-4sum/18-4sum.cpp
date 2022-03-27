class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
         int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<n-1;i++){
            if(i>0 && nums[i] == nums[i-1])
                continue;
            int rem = target - nums[i];
            for(int j = i+1;j<n;j++){
                if(j>i+1 && nums[j]==nums[j-1])
                    continue;
                int rem1 = rem - nums[j];
                int l = j+1;
                int r = n-1;
                while(l<r){
                    if(nums[l]+nums[r] < rem1)
                        l++;
                    else if(nums[l]+nums[r] > rem1)
                        r--;
                    else{
                        ans.push_back({nums[i],nums[j],nums[l],nums[r]});
                        if(nums[l] == nums[r])
                            break;
                        else{
                            int x = nums[l];
                            int y = nums[r];
                            while(x == nums[l])
                                l++;
                            while(y == nums[r])
                                r--;
                        }
                    }
                }
            }
        }
        return ans;
    }
};