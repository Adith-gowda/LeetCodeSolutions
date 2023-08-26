/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp = head;
        Node* clone=NULL;
        unordered_map<Node*, Node*> mp;
        while(temp!=NULL){
            Node* n = new Node(temp->val);
            mp[temp] =  n;
            if(clone==NULL){
                clone = n;
            }
            else{
                clone->next = n;
                clone = n;
            }
            temp = temp->next;
        }
        clone = mp[head];
        temp = head;
        while(temp!=NULL && clone!=NULL){
            clone->random = mp[temp->random];
            clone = clone->next;
            temp = temp->next;
        }
        return mp[head];
    }
};