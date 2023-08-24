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
    void insertAtTail(ListNode* &head,int val){
        ListNode* n = new ListNode(val); // (object Instantiation) 
        if(head==NULL){
            head=n;
            return;
        }
        ListNode* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        multiset<int> v;
        ListNode* temp = list1;
        while(temp!=NULL){
            v.insert(temp->val);
            temp=temp->next;
        }
        temp = list2;
        while(temp!=NULL){
            v.insert(temp->val);
            temp=temp->next;
        }
        ListNode* res=NULL;
        for(auto &pr : v){
            insertAtTail(res,pr);
        }
        return res;
    }
};