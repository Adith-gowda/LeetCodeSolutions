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
    ListNode* insertionSortList(ListNode* head) {
        ListNode *lp = head;
        while(lp!=nullptr && lp->next!=nullptr) {
            if(lp->next->val<lp->val) {
                ListNode *tmp = lp->next->next;
                if(head->val>=lp->next->val) { 
                    lp->next->next = head;
                    head=lp->next;
                }
                else {
                    ListNode *tmp2 = head; 
                    while(tmp2->next->val<lp->next->val) tmp2=tmp2->next; 
                    lp->next->next = tmp2->next;
                    tmp2->next = lp->next;
                }
                lp->next = tmp;
            }
            else lp=lp->next;
        }
        return head;
    }
};