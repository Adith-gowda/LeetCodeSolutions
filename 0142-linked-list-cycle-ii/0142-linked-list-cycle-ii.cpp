/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* temp = NULL;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                temp = fast;
                break;
            }
        }
        if(temp==NULL){
            return NULL;
        }
        while(head!=temp){
            head = head->next;
            temp = temp->next;
        }
        return head;
    }
};