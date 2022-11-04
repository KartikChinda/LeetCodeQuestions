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
    
    bool isPal(vector<int> a){
        int p = 0, q = a.size()-1;
        while(p <= q){
            if(a[p] != a[q]) return false;
            p++;
            q--;
        }
        
        return true; 
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode* curr = head;
        vector<int> res;
        while(curr){
            res.push_back(curr->val);
            curr = curr->next;
        }
        
        return isPal(res); 
    }
};