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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==nullptr){return NULL;}
        int count=0;
        ListNode* temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
        count=count/2+1;
        int i=0;
        temp=head;
        ListNode* prev;
        while(temp){
            i++;
            if(i==count){
                prev->next=temp->next;
                delete temp;
                break;
            }
           prev=temp;
           temp=temp->next;
        }
        return head;
    }
};