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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr || k == 0) {
            return head;
        }
        ListNode* temp = head;

        ListNode* newtail = head;
        int count = 1;
        while (temp->next != nullptr) {
            count++;
            temp = temp->next;
        }

        k = k % count;
        if (k == 0) {
            return head;
        }
        temp->next = head;
        int steps = count - k - 1;
        while (steps > 0) {
            newtail = newtail->next;
            steps--;
        }
        ListNode* newhead = newtail->next;

        newtail->next = nullptr;
        return newhead;
    }
};