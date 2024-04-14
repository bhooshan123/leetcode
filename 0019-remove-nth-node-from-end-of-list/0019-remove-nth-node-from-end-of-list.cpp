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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
  ListNode* dummy = new ListNode(0); 
        dummy->next = head;
        
        ListNode* temp = dummy; 
        int length = 0;
        
        while (temp->next != nullptr) {
            length++;
            temp = temp->next;
        }
        
        length -= n;
        temp = dummy; 
        while (length > 0) {
            length--;
            temp = temp->next;
        }
        
        ListNode* nodeToRemove = temp->next;
        temp->next = temp->next->next;
        
        ListNode* newHead = dummy->next;
        delete dummy; 
        return newHead;
    }
};