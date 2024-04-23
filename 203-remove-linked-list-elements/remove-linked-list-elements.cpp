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
    ListNode* removeElements(ListNode* head, int val) {
        if (!head)
            return nullptr;
        if (head->val == val) {
            ListNode * toDelete = head;
            head = head->next;
            delete toDelete; 
            // If you remove the first node (the head of the list), 
            // and you don't use the result of the recursive call, the previous calls won't know that the head has changed. 

            //that's why i need a return here to update the head
            return  removeElements(head, val);
        }
        head-> next = removeElements(head->next, val);
        return head;
    }
};