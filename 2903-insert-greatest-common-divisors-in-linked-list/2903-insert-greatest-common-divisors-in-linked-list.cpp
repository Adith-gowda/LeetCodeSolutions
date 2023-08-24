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
    // int gcd(int a,int b){
    //     int mn = min(a,b);
    //     int mx = INT_MIN;
    //     for(int i=1;i<=mn;i++){
    //         if(a%i==0 && b%i==0){
    //             mx = max(mx,i);
    //         }
    //     }
    //     return mx;
    // }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = head;
        while(temp->next!=NULL){
            prev = temp;
            temp = temp->next;
            ListNode* n = new ListNode(__gcd(prev->val,temp->val));
            prev->next = n;
            n->next = temp;
        }
        return head;
    }
};