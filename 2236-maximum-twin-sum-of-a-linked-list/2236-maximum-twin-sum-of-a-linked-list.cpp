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
	int pairSum(ListNode* head) {
		stack<int> st;
		ListNode* slow = head;
		ListNode* fast = head;
		while(fast != NULL){
			st.push(slow -> val);
			slow = slow -> next;
			fast = fast -> next -> next; 
		}
		int ans = INT_MIN;
        
		while (slow != NULL){
			int temp = st.top() + slow -> val;
			ans = max(ans, temp);
			slow = slow -> next;
			st.pop();
		}
		return ans;
	}
};