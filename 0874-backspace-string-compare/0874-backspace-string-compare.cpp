class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        stack<char> stt;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
                if(st.empty()){
                    continue;
                }
                else{
                    st.pop();
                }
            }
            else{
                st.push(s[i]);
            }
        }
        for(int i=0;i<t.size();i++){
            if(t[i]=='#'){
                if(stt.empty()){
                    continue;
                }
                else{
                    stt.pop();
                }
            }
            else{
                stt.push(t[i]);
            }
        }
        if(st.size()!=stt.size()){
            return false;
        }
        else if(st.empty() && stt.empty()){
            return true;
        }
        else{
            while(!st.empty()){
                if(st.top()==stt.top()){
                    st.pop();
                    stt.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty() && stt.empty()){
            return true;
        }
        return false;
    }
};