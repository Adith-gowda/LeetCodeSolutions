class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int depth=0;
        int mx = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
                depth++;
                mx = max(mx,depth);
            }
            else{
                if(s[i]==')'){
                    st.pop();
                    depth--;
                }
            }
        }
        return mx;
    }
};