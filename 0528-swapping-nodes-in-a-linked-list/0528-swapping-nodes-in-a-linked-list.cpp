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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp1=head;
        int len = 0;
        while(temp1!=NULL){
            len++;
            temp1 = temp1->next;
        }
        temp1 = head;
        int t = k;
        while(t>1){
            temp1 = temp1->next;
            t--;
        }
        ListNode* temp2 = head;
        t = len - k + 1;
        while(t>1){
            temp2 = temp2->next;
            t--;
        }
        swap(temp1->val,temp2->val);
        // cout<<temp1->val<<" "<<temp2->val;
        return head;
    }
};