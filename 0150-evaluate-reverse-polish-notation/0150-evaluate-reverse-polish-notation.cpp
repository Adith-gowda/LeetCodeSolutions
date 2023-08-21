class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        // for(auto &pr : tokens){
        //     cout<<pr<<" ";
        // }
        stack<int> st;
        for(int i=0;i<tokens.size();i++){
            // if(st.empty() && (s[i] == "+" || s[i] != "-" || s[i] = "*" || s[i] = "/")){

            // }
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/"){
                int x = stoi(tokens[i]);
                st.push(x);
            }
            else{
                int a,b;
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                if(tokens[i] == "+"){
                    int sum = b+a;
                    st.push(sum);
                }
                else if(tokens[i]=="-"){
                    int sub = b-a;
                    st.push(sub);
                }
                else if(tokens[i]=="*"){
                    int mul = b*a;
                    st.push(mul);
                }
                else{
                    int div = b/a;
                    st.push(div);
                }
            }
        }
        // cout<<st.top();
        return st.top();
    }
};