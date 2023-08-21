class Solution {
public:
    bool validateStackSequences(vector<int>& pu, vector<int>& po) {
        stack<int> st;
        int i = 0;
        for(int a : pu){
            st.push(a);
            while(!st.empty() && st.top() == po[i]){
                i++;
                st.pop();
            }
        }
        return i==po.size();
    }
};