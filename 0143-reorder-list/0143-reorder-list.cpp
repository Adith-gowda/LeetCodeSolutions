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
        ListNode* temp = head;
        int len=0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }

        ListNode* first;
        temp=head;
        ListNode* second;

        int k = len/2;
        while(k){
            first=temp;
            temp = temp->next;
            k--;
        }
        second = temp;
        if(len%2!=0){
            first=second;
            second = second->next;
        }
        first->next=NULL;

        ListNode* prev = NULL;
        ListNode* succ = NULL;

        while(second!=NULL){
            succ=second->next;
            second->next=prev;
            prev = second;
            second = succ;
        }

        second = prev;
        temp = head;
        succ=NULL;
        prev=NULL;

        while(temp!=NULL && second!=NULL){
            succ=temp->next;
            temp->next=second;
            prev=second->next;
            second->next=succ;
            temp=succ;
            second=prev;
        }
    }
};