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
    void util(TreeNode* root, vector<int> &res){
        if(!root) return;
        util(root->left, res);
        util(root->right, res);
        res.push_back(root->val);
    }
    
    
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        util(root, res);
        return res;
    }
};