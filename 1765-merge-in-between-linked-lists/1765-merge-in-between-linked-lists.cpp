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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp=list1;
        ListNode* one=list1;
        while((a>0 || b>=0)){
            if(a==1){
                one = temp;
            }
            a--;
            b--;
            temp=temp->next;
        }
        one->next=list2;
        one = list2;
        while(one->next!=NULL){
            one=one->next;
        }
        one->next=temp;
        cout<<one->val<<" "<<temp->val;
        return list1;
    }
};