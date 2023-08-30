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
// class Solution {
// public:
//     void insert(ListNode* &head,int val){
//         ListNode* n = new ListNode(val);
//         if(head == NULL){
//             head = n;
//             return;
//         }
//         ListNode* t=head;
//         while(t->next!=NULL){
//             t=t->next;
//         }
//         t->next=n;
//     }
//     ListNode* deleteDuplicates(ListNode* head) {
//         map<int,int> mp;
//         ListNode* temp=head;
//         while(temp!=NULL){
//             mp[temp->val]++;
//             temp = temp->next;
//         }
//         ListNode* res=NULL;
//         for(auto pr : mp){
//             if(pr.second==1){
//                 insert(res,pr.first);
//             }
//         }
//         return res;
//     }
// };
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode* dummy=new ListNode(0);
        ListNode* td=dummy;
        ListNode* temp=head;
        int x,flag=0;
        while(temp!=NULL){
            if(flag==0){
                if(temp->next==NULL||temp->val!=temp->next->val){
                    td->next=temp;
                    td=td->next;
                    temp=temp->next;
                }else if(temp->val==temp->next->val){
                    temp=temp->next;
                    x=temp->val;
                    flag=1;
                }
            }else{
                if(temp->val==x){
                    temp=temp->next;
                }else{
                    flag=0;
                }
            }
        }
        if(flag==1){
            td->next=temp;
        }
        return dummy->next;
    }
};