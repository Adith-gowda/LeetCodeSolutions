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
    int length(ListNode* head){
        ListNode* temp = head;
        int count = 0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL) return NULL;
        int n = length(head);
        int t = n/2;
        ListNode* temp = head;
        for(int i=0;i<t;i++){
            if(i==t-1){
                ListNode* todelete = temp->next;
                temp->next=temp->next->next;
                delete todelete;
            }
            temp=temp->next;
        }
        return head;
    }
};