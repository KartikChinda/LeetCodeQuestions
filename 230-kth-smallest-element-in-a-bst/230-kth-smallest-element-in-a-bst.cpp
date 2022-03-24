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
    void util(TreeNode* root, int &k, int &ans){
        if(!root) return;
        if(k<0) return;
        util(root->left, k, ans);
        k--;
        if(k == 0){
            ans = root->val;
            return;
        }
        util(root->right, k, ans);
        return;
    }
    
    
    int kthSmallest(TreeNode* root, int k) {
        int ans = -1;
        util(root, k, ans);
        return ans;
    }
};