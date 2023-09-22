class Solution {
public:
    string decodeString(string s) {
        stack<string> st;
        int i=0;
        string str = "", ans = "";
        while(i<s.length()) {
            if(s[i] >= 'a' && s[i] <= 'z') {
                str = "";
                while(s[i] >= 'a' && s[i] <= 'z') {
                    str = str + s[i];
                    i++;
                }
                st.push(str);
            }
            else if(s[i] >= '0' && s[i] <= '9') {
                str = "";
                while(s[i] >= '0' && s[i] <= '9') {
                    str = str + s[i];
                    i++;
                }
                st.push(str);
            }
            else if(s[i] == ']') {
                str = "";
                while(!isdigit(st.top()[0])) {
                    str = st.top() + str;
                    st.pop();
                }
                int mul = stoi(st.top());
                st.pop();
                ans = "";
                for(int j=0;j<mul;j++){
                    ans += str;
                }
                st.push(ans);
                i++;
            }
            else {
                i++;
            }
        }

        str="";
        while(!st.empty()) {
            str = st.top() + str;
            st.pop();
        }
        return str;
    }
};