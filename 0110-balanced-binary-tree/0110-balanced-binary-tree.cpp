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
    
    int getHeight(TreeNode* root){
        if(root == NULL) return 0;
        return (max(getHeight(root->left), getHeight(root->right)) + 1);
    }
    
    
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;
        int leftH = getHeight(root->left);
        int rightH = getHeight(root->right);
        if(abs(leftH-rightH) > 1) return false;
        return (isBalanced(root->left) && isBalanced(root->right));
    }
};