/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    int count(ListNode *p) {
        int count=0;
        while(p) {
            count++;
            p=p->next;
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return NULL;
        int len1 = count(headA);
        int len2 = count(headB);
        ListNode* p=headA;
        ListNode* q=headB;
        if(len1 > len2) {
            while(len1-len2) {
                p=p->next;
                len1--;
            }
        }
        if(len2 > len1) {
            while(len2-len1) {
                q=q->next;
                len2--;
            }
        }
        while(p != q) {
            p=p->next;
            q=q->next;
        }
        return p;
    }
};