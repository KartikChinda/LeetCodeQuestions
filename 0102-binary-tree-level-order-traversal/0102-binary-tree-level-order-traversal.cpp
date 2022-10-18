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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q; 
        q.push(root);
        vector<vector<int>> res; 
        if(!root) return res; 
        while(!q.empty()){
            vector<int> temp;
            int size = q.size();
            for(int i = 0; i<size; i++){
                TreeNode* curr = q.front();
                q.pop(); 
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
                temp.push_back(curr->val); 
            }
            res.push_back(temp); 
        }
        return res; 
    }
};