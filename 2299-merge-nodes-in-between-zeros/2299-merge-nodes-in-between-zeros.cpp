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
    ListNode* mergeNodes(ListNode* head){
        ListNode* temp = head->next;
        ListNode* curr=temp;
        int sum=0;
        while(temp!=NULL){
            if(temp->val==0){
                curr->val=sum;
                sum=0;
                curr->next = temp->next;
                curr = curr->next;
            }
            sum = sum + temp->val;
            temp = temp->next;
        }
        return head->next;

    }
};