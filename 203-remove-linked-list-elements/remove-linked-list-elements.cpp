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
// class Solution {
// public:
//     ListNode* removeElements(ListNode* head, int val) {
//         if (!head)
//             return nullptr;
//         if (head->val == val) {
//             ListNode * toDelete = head;
//             head = head->next;
//             delete toDelete; 
//             // If you remove the first node (the head of the list), 
//             // and you don't use the result of the recursive call, the previous calls won't know that the head has changed. 

//             //that's why i need a return here to update the head
//             return  removeElements(head, val);
//         }
//         head-> next = removeElements(head->next, val);
//         return head;
//     }
// };

// optimize solution . what if using one loop
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // Start with a sentinel node.
        ListNode* sentinel = new ListNode(0);
        sentinel->next = head;

        // Use two pointers: prev and curr.
        ListNode* prev = sentinel;
        ListNode* curr = head;

        while (curr != nullptr) {
            if (curr->val == val) {
                // Remove the current node.
                prev->next = curr->next;
                delete curr;  // Free memory of the node being removed.
                curr = prev->next;  // Move curr to the next node.
            } else {
                // Move prev and curr one step forward when no deletion occurs.
                prev = curr;
                curr = curr->next;
            }
        }

        // The new head of the list.
        ListNode* newHead = sentinel->next;
        delete sentinel;  // Clean up the sentinel node.
        return newHead;
    }
};
