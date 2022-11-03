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
    
    bool isSame(TreeNode* a, TreeNode* b){
        if(!a && !b) return true;
        if((a && !b) || (!a && b)) return false;
        bool isTrue = a->val == b->val;
        return (isTrue && (isSame(a->left, b->right)) && isSame(a->right, b->left)); 
    }
    
    
    bool isSymmetric(TreeNode* root) {
        return isSame(root->left, root->right);
    }
};