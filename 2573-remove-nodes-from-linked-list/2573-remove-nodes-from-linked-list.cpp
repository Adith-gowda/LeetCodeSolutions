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
    void reverse(ListNode* &head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* succ=NULL;
        while(curr){
            succ=curr->next;
            curr->next=prev;
            prev=curr;
            curr=succ;
        }
        head=prev;
    }
    ListNode* removeNodes(ListNode* head) {
        reverse(head);
        ListNode* prev=head;
        ListNode* temp=head->next;
        while(temp!=NULL){
            if(prev->val>temp->val){
                temp=temp->next;
                prev->next=temp;
            }
            else{
                prev=temp;
                temp=temp->next;
            }

        }
        reverse(head);
        return head;
    }
};