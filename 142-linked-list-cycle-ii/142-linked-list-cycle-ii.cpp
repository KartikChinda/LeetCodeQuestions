/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
    ListNode* floydAlgo(ListNode* head){
        if(head == NULL) return NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        while(slow !=NULL && fast != NULL){
            fast = fast->next;
            if(fast) fast = fast->next;
            slow = slow->next;
            if(slow == fast && slow != NULL) return slow;
        }
        return NULL;
    }
    
    ListNode *detectCycle(ListNode *head) {
        ListNode* intersectionNode = floydAlgo(head);
        if(intersectionNode == NULL) return NULL;
        ListNode* node = head;
        while(true){
            if(intersectionNode == node) return node;
            node = node->next;
            intersectionNode = intersectionNode->next;
            
        }
    }
};