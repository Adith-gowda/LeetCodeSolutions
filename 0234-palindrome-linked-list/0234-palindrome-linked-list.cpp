class Solution {
public:
    bool ispalin(vector<int>& v, int i, int j) {
        if (i >= j) {
            return true;
        }
        if (v[i] != v[j]) {
            return false;
        }
        return ispalin(v, i + 1, j - 1);
    }

    bool isPalindrome(ListNode* head) {
        vector<int> v;
        ListNode* node = head;       
        while (node != nullptr) {
            v.push_back(node->val);
            node = node->next;
        }
        
        return ispalin(v, 0, v.size() - 1);
    }
};