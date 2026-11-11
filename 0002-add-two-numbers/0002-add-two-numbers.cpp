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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;
        ListNode* first = l1;
        ListNode* second = l2;
        int result = 0;
        int digit = 0;
        int carry = 0;

        while (first != nullptr && second != nullptr) {

            result = first->val + second->val + carry;

            if (result <= 9) {
                tail->next = new ListNode(result);
                carry = 0;
            } else {
                digit = result % 10;
                carry = result / 10;
                tail->next = new ListNode(digit);
            }

            first = first->next;
            second = second->next;
            tail = tail->next;
        }

        while (first != nullptr) {
            result = first->val + carry;

            if (result <= 9) {
                tail->next = new ListNode(result);
                carry = 0;
            } else {
                digit = result % 10;
                carry = result / 10;
                tail->next = new ListNode(digit);
            }

            first = first->next;
            tail = tail->next;
        }

        while (second != nullptr) {
            result = second->val + carry;

            if (result <= 9) {
                tail->next = new ListNode(result);
                carry = 0;
            } else {
                digit = result % 10;
                carry = result / 10;
                tail->next = new ListNode(digit);
            }

            second = second->next;
            tail = tail->next;
        }

        if (carry != 0) {
            tail->next = new ListNode(carry);
        }

        return dummy.next;
    }
};