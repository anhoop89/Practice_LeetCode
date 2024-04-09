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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * listA = headA , * listB = headB;
        while (listA != listB) {
            listA = listA ? listA->next : headB;
            listB = listB ? listB->next : headA;   
        }
        return listA; // return A or B doesn't matter since it has the same value as of the intersection value. 
    }
};

/*
loop in circle until it reached the goal
    A1   A2   A3   A3   A4  LB1   LB2   LB3
lA: 1    9    1    2    4   3      2     4
    

    B1   B2   B3  LA1  LA2   LA3  LA4   LA5
lB: 3    2    4    1    9     1     2    4
       

   A1  A2   A3  | B1   B2  lastB
A  2    6   4     1    5    null


   B1  B2   | A1   A2    A3  lastA
B  1    5     2     6    4    null


*/  