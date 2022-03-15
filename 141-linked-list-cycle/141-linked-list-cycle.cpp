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
    bool hasCycle(ListNode *head) {
//         this is the Floyd's cycle detection algorithm;
        if(head == NULL) return false;
        ListNode* slow = head;
        ListNode* fast = head;
        while(slow!=NULL && fast!=NULL){
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
            } 
            slow = slow->next;
            if(slow == fast && slow != NULL) return true;
        }
        return false;
        
//         THIS IS A NAIVE APPROACH
        // if(head == NULL) return true;
        // ListNode* temp = head;
        // map<ListNode*, bool> visited;
        // while(temp != NULL){
        //     if(visited[temp] == true) return true;
        //     visited[temp] = true;
        //     temp = temp->next;
        // }
        // return false;
    }
    
        
};