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
    void insertAtTail(ListNode* &head,int val){
        ListNode* n = new ListNode(val); // (object Instantiation) 
        if(head==NULL){
            head=n;
            return;
        }
        ListNode* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int c1=0;
        int c2=0;
        while(temp1!=NULL){
            c1++;
            temp1 = temp1->next;
        }
        while(temp2!=NULL){
            c2++;
            temp2 = temp2->next;
        }
        int mn = min(c1,c2);
        // cout<<mn<<endl;
        int carry=0;
        ListNode* head=NULL;
        temp1 = l1;
        temp2 = l2;
        while(mn>0){
            int sum = temp1->val + temp2->val + carry;
            // cout<<temp1->val<<" "<<temp2->val<<endl;
            if(sum>=10){
                insertAtTail(head,sum%10);      
                carry = 1;
            }
            else{
                insertAtTail(head,sum);      
                carry = 0;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
            mn--;
        }
        if(temp1!=NULL){
            while(temp1!=NULL){
                int t = temp1->val + carry;
                if(t>=10){
                    insertAtTail(head,t%10);      
                    carry = 1;
                }
                else{
                    insertAtTail(head,t);      
                    carry = 0;
                }
                temp1 = temp1->next;
            }
        }
        else if(temp2!=NULL){
            while(temp2!=NULL){
                int t = temp2->val + carry;
                if(t>=10){
                    insertAtTail(head,t%10);      
                    carry = 1;
                }
                else{
                    insertAtTail(head,t);      
                    carry = 0;
                }
                temp2 = temp2->next;
            }
        }
        if(carry){
            insertAtTail(head,1);
        }
        // cout<<temp!=NULL<<" "<<temp2!=NULL;
        cout<<carry;
        return head;
    }
};