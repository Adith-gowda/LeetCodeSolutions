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
    void insert(ListNode* &head,int val){
        ListNode* n = new ListNode(val);
        if(head==NULL){
            head = n;
            return;
        }
        ListNode* t=head;
        while(t->next!=NULL){
            t=t->next;
        }
        t->next=n;
    }
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp = head;
        ListNode* res=NULL;
        while(temp!=NULL){
            if(temp->val<x){
                insert(res,temp->val);
            }
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            if(temp->val>=x){
                insert(res,temp->val);
            }
            temp=temp->next;
        }
        return res;
    }
};