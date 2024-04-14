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
    void reorderList(ListNode* head) {
               if (!head || !head->next || !head->next->next) return;

        // Step 1: Find the middle of the list
        ListNode *slow = head, *fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse the second half of the list
        ListNode *prev = nullptr, *curr = slow->next, *next = nullptr;
        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        slow->next = nullptr; // Split the list into two parts

        // Step 3: Merge the two halves
        ListNode *first = head, *second = prev;
        while (second) {
            ListNode *temp1 = first->next, *temp2 = second->next;
            first->next = second;
            second->next = temp1;
            first = temp1;
            second = temp2;
        }
    }
};
    