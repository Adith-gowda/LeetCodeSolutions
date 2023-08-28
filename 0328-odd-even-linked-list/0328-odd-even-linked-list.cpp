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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        ListNode* even=head->next;
        ListNode* temp=even;
        ListNode* odd=head;
        while(1){
            if(even->next==NULL || odd->next==NULL){
                even->next=NULL;
                odd->next=NULL;
                break;
            }
            odd->next = even->next;
            odd = even->next;
            if(even->next==NULL || odd->next==NULL){
                even->next=NULL;
                odd->next=NULL;
                break;
            }
            even->next = odd->next;
            even = odd->next;
            if(even->next==NULL || odd->next==NULL){
                even->next=NULL;
                odd->next=NULL;
                break;
            }
        }
        odd->next=temp;
        return head;
    }
};