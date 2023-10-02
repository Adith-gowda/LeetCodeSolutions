// class Solution {
// public:
//     bool ispalin(vector<int>& v, int i, int j) {
//         if (i >= j) {
//             return true;
//         }
//         if (v[i] != v[j]) {
//             return false;
//         }
//         return ispalin(v, i + 1, j - 1);
//     }

//     bool isPalindrome(ListNode* head) {
//         vector<int> v;
//         ListNode* node = head;       
//         while (node != nullptr) {
//             v.push_back(node->val);
//             node = node->next;
//         }
        
//         return ispalin(v, 0, v.size() - 1);
//     }
// };
class Solution {
public:
bool isPalindrome(ListNode* head) {
    ListNode* fast = head;
    ListNode* slow = head;
    ListNode* prev = nullptr;  
    while (fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;

        // Reverse the first half of the list
        ListNode* nextTemp = slow->next;
        slow->next = prev;
        prev = slow;
        slow = nextTemp;
    }

    //  skip the middle node if odd number of nodes,
    if (fast != nullptr) {
        slow = slow->next;
    }
    while (prev != nullptr && slow != nullptr) {
        if (prev->val != slow->val) {
            return false;
        }
        prev = prev->next;
        slow = slow->next;
    }

    return true;
}
};