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
    void merge(ListNode* &temp,ListNode* &curr, int sum){
        if(!temp){
            return;
        }
        if(temp->val==0){
            curr->val=sum;
            sum=0;
            curr->next = temp->next;
            curr = curr->next;
        }
        if(!temp){
            return;
        }
        sum = sum + temp->val;
        merge(temp->next,curr,sum);

    }
    ListNode* mergeNodes(ListNode* head){
        ListNode* temp = head->next;
        ListNode* curr=temp;
        int sum=0;
        // while(temp!=NULL){
        //     if(temp->val==0){
                // curr->val=sum;
                // sum=0;
                // curr->next = temp->next;
                // curr = curr->next;
        //     }
            // sum = sum + temp->val;
        //     temp = temp->next;
        // }
        merge(temp,curr,sum);
        return head->next;

    }
};