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
        int count = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        if(count == 1 && n == 1){
            delete head;
            return NULL;
        }
        if(count==n){
            head = head->next;
            return head;
        }
        int c = count - n;
        ListNode* prev = NULL;
        temp = head;
        while(c>0 && temp!=NULL){
            prev = temp;
            temp = temp->next;
            c--;
        }
        if(temp->next==NULL){
            prev->next = NULL;
        }
        else{
            prev->next = temp->next;
        }
        delete temp;
        // cout<<prev->val<<" "<<temp->val;
        return head;

    }
};