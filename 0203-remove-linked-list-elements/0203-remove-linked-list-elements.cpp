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
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=nullptr&&head->val==val){
            ListNode* dlt=head;
            head=head->next;
            delete dlt;}
                ListNode* temp=head;

        while(temp!=nullptr&&temp->next!=nullptr){
            if(temp->next->val==val){
                ListNode* dlt=temp->next;
                temp->next=temp->next->next;
                delete dlt;
                
            }
            else{
            temp=temp->next;}
        }
        return head;
    }
};