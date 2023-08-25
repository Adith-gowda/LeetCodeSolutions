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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return head;
        }
        ListNode* dummy = new ListNode();
        dummy->next = head;
        head = dummy;

        ListNode* prev = head;
        ListNode* temp = head->next;

        while(temp && temp->next){
            prev->next = temp->next;
            temp->next = prev->next->next;
            prev->next->next = temp;
            prev = temp;
            temp = temp->next;
        }

        return head->next;
    }
};