class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n = s.size();
        stack<char> st;
        vector<int> vis(26, 0);
        vector<int> mp(26, 0); 
        for (char c : s) mp[c - 'a']++;
        for (char c : s) {
            mp[c - 'a']--;
            if (vis[c - 'a']) {
                continue; 
            }
            while (!st.empty() && c < st.top() && mp[st.top() - 'a'] > 0) {
                vis[st.top() - 'a'] = 0;
                st.pop();
            }
            st.push(c);
            vis[c - 'a'] = 1;
        }
        string ans = "";
        while (!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};