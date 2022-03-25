/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    TreeNode* util(vector<int> &nums, int &index, int len){
        if(len == 0) return NULL;
        TreeNode* root = new TreeNode();
        root->left = util(nums, index, len/2);
        root->val = nums[index];
        index++;
        root->right = util(nums, index, (len-1)/2);
        return root;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() == 0) return NULL;
        int len = nums.size();
        int index = 0;
        TreeNode* ans = util(nums, index, len);
        return ans;
        
    }
};