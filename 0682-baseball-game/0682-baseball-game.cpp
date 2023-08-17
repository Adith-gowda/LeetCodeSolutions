class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int sum=0;
        for(int i=0;i<operations.size();i++){
            if (operations[i] == "+"){
                int a,b;
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                st.push(b);
                st.push(a);
                st.push(a+b);
            }else if(operations[i] == "D"){
                st.push(2*st.top());
            }else if(operations[i] == "C"){
                st.pop();
            }
            else{
                int x;
                x=stoi(operations[i]);
                st.push(x);
            }
        }
        while(!st.empty()){
            sum = sum + st.top();
            st.pop();
        }
        cout<<sum;
        return sum;
    }
};