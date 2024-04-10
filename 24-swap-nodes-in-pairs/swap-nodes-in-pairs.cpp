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
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next)
            return head;
        ListNode* newHead = head->next;
        head->next = swapPairs(head->next->next);
        newHead->next = head;
        return newHead;
    }
  
};

/* noted:
1      2         3        4         5    6 7 
head   newhead

2         -> 1     ---> 3 
newhead      head     head->next->next

head->next->next because head was at 1 at the beigning,
so the updated head->next should be 3 then we have head->next->next. if null, return head 

3   4 would be doing the same when passing the recursive function of swapPairs(head->next->next);
*/