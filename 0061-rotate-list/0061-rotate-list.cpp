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
    void reverse(ListNode* &head){
        ListNode* current = head;
        ListNode *prev = NULL, *next = NULL;
        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL){
            return NULL;
        }
        stack<int> st;
        ListNode* temp = head;
        int len = 0;
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        k = k%len;
        int t=k;
        reverse(head);
        // cout<<k;
        temp = head;
        ListNode* prev = head;
        while(t>0){
            st.push(temp->val);
            temp = temp->next;
            t--;
        }
        t=k;
        while(t>0){
            prev->val = st.top();
            st.pop();
            prev = prev->next;
            t--;
        }
        while(temp!=NULL){
            st.push(temp->val);
            temp = temp->next;
        }
        while(prev!=NULL){
            prev->val = st.top();
            st.pop();
            prev = prev->next;
        }
        // cout<<temp->val<<" "<<prev->val;
        return head;

    }
};