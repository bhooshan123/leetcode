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
    ListNode* removeZeroSumSublists(ListNode* head) {
        vector<int>arr;
        ListNode* temp=head;
        while(temp){
          arr.push_back(temp->val);
          temp=temp->next;
        }
        bool found;
         do {
            found = false;
            int sum = 0;
            for (int i = 0; i < arr.size(); ++i) {
                sum = 0;
                for (int j = i; j < arr.size(); ++j) {
                    sum += arr[j];
                    if (sum == 0) {
                        arr.erase(arr.begin() + i, arr.begin() + j + 1);
                        found = true;
                        break;
                    }
                }
                if (found) break;
            }
        } while (found);
        ListNode* dummyHead = new ListNode(0); // Dummy head to simplify list operations
        ListNode* current = dummyHead;
        for (int value : arr) {
            current->next = new ListNode(value);
            current = current->next;
        }
        return dummyHead->next;
    }
};