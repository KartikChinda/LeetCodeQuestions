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
    
    void util(TreeNode* root, bool &flag, long long s, long long e){
        if(!root){
            return;
        }
        if(s>e){
            flag = false;
            return;
        }
        if(root->val < s || root->val >e){
            flag = false;
            return;
        }
        util(root->left, flag, s, (long long)(root->val)-1);
        util(root->right, flag, (long long)(root->val)+1, e);
    }
    
    
    bool isValidBST(TreeNode* root) {
        bool flag = true;
        long long s = INT_MIN;
        long long e = INT_MAX;
        util(root, flag, s, e);
        
        return flag;
    }
};