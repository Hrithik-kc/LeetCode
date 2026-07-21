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
    ListNode* Merge(ListNode* left, ListNode* right) {
        ListNode dummy(0);//a new list with dummy value 0
        ListNode* tail = &dummy;//points to last value of dummy linked list
        while (right != nullptr && left != nullptr) {
            if (left->val < right->val) {
                tail->next = left;
                left = left->next;
            } else {
                tail->next = right;
                right = right->next;
            }
            tail = tail->next;// tail to move to updated value
        }
        if (left == nullptr) {
            tail->next = right;
        } else if (right == nullptr) {
            tail->next = left;
        }
            return dummy.next; //make the pointer to point to first value of linked list by shifting the pointer from dummy value zero
        
    }
    ListNode* sortList(ListNode* head) {
        if (head == nullptr || head->next == NULL) {
            return head;
        }
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* prev = nullptr;
        while (fast != nullptr && fast->next != nullptr) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = nullptr;
        ListNode* left = sortList(head);
        ListNode* right = sortList(slow);
        return Merge(left, right);
    }
};