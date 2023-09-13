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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int len =0;
        ListNode *temp=head,*temp1;
        while(head){
            len+=1;
            head=head->next;
        }
        head=temp;
        int sizeEx = len/k,extra = len%k,p=0;
        vector<ListNode*> ans;
        while(temp && extra--){
            ans.push_back(temp);
            int z=sizeEx+1;
            while(z--){
                temp1=temp;
                temp=temp->next;
            }
            temp1->next=NULL;
        }
        p=len/k;
        while(temp){
            ans.push_back(temp);
            int z=sizeEx;
            while(z--){
                temp1=temp;
                temp=temp->next;
            }
            temp1->next=NULL;
        }
        p=ans.size();
        while(k>p){
            ans.push_back(NULL);
            p+=1;
        }
        return ans;
    }
};