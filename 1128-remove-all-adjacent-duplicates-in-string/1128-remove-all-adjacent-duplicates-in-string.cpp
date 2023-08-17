class Solution {
public:
    string removeDuplicates(string s) {
        if(s == ""){
            return s;
        }
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(st.empty()){
                st.push(s[i]);

            }
            else{
                if(s[i]==st.top()){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
        }
        string res = "";
        while(!st.empty()){
            res = st.top() + res;
            st.pop();
        }
        // reverse(res.begin(), res.end());
        // cout<<res;
        return res;
    }
};