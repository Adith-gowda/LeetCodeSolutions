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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* run = dummy;

        while (run) {
            int sum = 0;
            ListNode* current = run->next;
            while (current) {
                sum += current->val;
                if (sum == 0) {
                    sum=0;
                    run->next = current->next;
                }
                current = current->next;
            }
            run = run->next;
        }
        return dummy->next;
    }
};