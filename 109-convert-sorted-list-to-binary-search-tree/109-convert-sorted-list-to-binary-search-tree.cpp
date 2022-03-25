/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    int getLength(ListNode* head){
        int count = 0;
        while(head!= NULL){
            count++;
            head = head->next;
        }
        return count;
    }
    
    TreeNode* util(ListNode* &head, int len){
        if(len == 0) return NULL;
        TreeNode* root = new TreeNode();
        root->left = util(head, len/2);
        root->val = head->val;
        head = head->next;
        root->right = util(head, (len-1)/2);
        
        return root;
    }
    
    
    TreeNode* sortedListToBST(ListNode* head) {
        int len = getLength(head);
        if(len == 0) return NULL;
        TreeNode* ans = util(head, len);
        return ans;
    }
};