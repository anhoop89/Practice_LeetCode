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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head)  
            return NULL;
        return removeDuplicates(head, head->next);
    }
    ListNode* removeDuplicates(ListNode* head, ListNode* cur) {
        if (cur == NULL)
            return head; 
        if ( cur->val == head->val) {
            // delete at beginning 
            ListNode* temp; 
            temp = cur;
            if (cur->next)
                cur = cur->next; 
            else 
                cur = nullptr;
            delete temp;
            head->next = cur;  
            removeDuplicates(head, head->next);
        } else
            removeDuplicates(head->next, cur->next);
        return head; 
        
    }

};