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
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head) return NULL;
        
        ListNode* prev = NULL, *curr = head, *fwd;
        int count = 0;
        while (curr != NULL && count<k){
            fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
            count++;
        }
       
        if(fwd != NULL){
            ListNode* temp = fwd;
            int ct = 0;
            while(temp!=NULL && ct < k){
                temp = temp->next;
                ct++;
            }
            if(ct % k == 0){
                head->next = reverseKGroup(fwd, k);
            } else {
                head->next = curr;
            }
            
        }
        return prev;
        
    }
};