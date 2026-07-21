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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        if (headA == NULL && headB == NULL)
            return NULL;

        ListNode* Link1 = headA;
        ListNode* Link2 = headB;
        while (Link1 != Link2) {
            if (Link1 == nullptr) {
                Link1 = headB;
            } else {
                Link1 = Link1->next;
            }
            if (Link2 == nullptr) {
                Link2 = headA;
            } else {
                Link2 = Link2->next;
            }
        }
        return Link2;
    }
};