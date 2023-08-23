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
    void insertAtTail(ListNode* &head1,int val){
        ListNode* n = new ListNode(val); // (object Instantiation) 
        if(head1==NULL){
            head1=n;
            return;
        }
        ListNode* temp=head1;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }
    void reverse(ListNode* &head){
        ListNode* current = head;
        ListNode *prev = NULL, *next = NULL;
        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
    ListNode* doubleIt(ListNode* head) {
        reverse(head);
        int carry = 0;
        ListNode* temp = head;
        ListNode* res = NULL;
        while(temp!=NULL){
            int sum = (temp->val*2) + carry;
            if(sum>=10){
                insertAtTail(res,sum%10);
                carry = 1;
            }
            else{
                insertAtTail(res,sum);
                carry = 0;
            }
            temp = temp->next;
        }
        if(carry){
            insertAtTail(res,1);
        }
        reverse(res);
        return res;
    }
};