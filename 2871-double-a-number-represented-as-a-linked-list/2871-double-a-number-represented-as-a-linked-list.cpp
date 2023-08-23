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
        ListNode* res = temp;
        ListNode* prev = NULL;
        while(temp!=NULL){
            prev = temp;
            int sum = (temp->val*2) + carry;
            if(sum>=10){
                temp->val = sum%10;
                carry = 1;
            }
            else{
                temp->val = sum;
                carry = 0;
            }
            temp = temp->next;
        }
        if(carry){
            ListNode* n = new ListNode(1);
            prev->next = n;
        }
        reverse(res);
        return res;
    }
};