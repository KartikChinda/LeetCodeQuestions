class Solution {
public:
    
    void util(vector<int> nums, int i, vector<int> output, vector<vector<int>> &fin){
//         base case
        if(i >= nums.size()){
            fin.push_back(output);
            return;
        }
        
//         Solve with excluding the number
        util(nums, i+1, output, fin);
//         solve with including the number
        int element = nums[i];
        output.push_back(element);
        util(nums, i+1, output, fin);
        
    }
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> fin;
        vector<int> output;
        int i = 0;
        util(nums, i, output, fin);
        return fin;
    }
};