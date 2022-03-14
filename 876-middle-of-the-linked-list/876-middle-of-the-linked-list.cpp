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
    ListNode* middleNode(ListNode* head) {
//         So the point of this question is that say if we have two runners, one is 2x the other, then by the time the faster runner reaches the end of the list, the slower runner will obviously be at 1/2 the distance, ie the middle of the fucking list. How epic is this shit 
        ListNode* slow = head, *fast = head->next;
        while(fast!=NULL){
            fast = fast->next;
            if(fast!=NULL){
                fast = fast->next;
            }
            slow = slow->next;
        }
        
        return slow;
    }
};