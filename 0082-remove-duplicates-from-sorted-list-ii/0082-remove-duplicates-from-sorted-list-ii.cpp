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
    void insert(ListNode* &head,int val){
        ListNode* n = new ListNode(val);
        if(head == NULL){
            head = n;
            return;
        }
        ListNode* t=head;
        while(t->next!=NULL){
            t=t->next;
        }
        t->next=n;
    }
    ListNode* deleteDuplicates(ListNode* head) {
        map<int,int> mp;
        ListNode* temp=head;
        while(temp!=NULL){
            mp[temp->val]++;
            temp = temp->next;
        }
        ListNode* res=NULL;
        for(auto pr : mp){
            if(pr.second==1){
                // cout<<pr.first<<" ";
                insert(res,pr.first);
            }
        }
        return res;
    }
};