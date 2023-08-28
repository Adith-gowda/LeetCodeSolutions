// class Solution {
// public:
//     vector<int> asteroidCollision(vector<int>& asteroids) {
//         stack<int> st;
//         for(int i=0;i<asteroids.size();i++){
//             if(st.empty()){
//                 st.push(asteroids[i]);
//                 continue;
//             }
//             if((st.top()>0 && asteroids[i]>0) || (st.top()<0 && asteroids[i]<0)){
//                 st.push(asteroids[i]);
//                 continue;
//             }
//             else{
//                 int flag=0;
//                 while(!st.empty() && ((st.top()>0 && asteroids[i]<0) || (st.top()<0 && asteroids[i]>0))){
//                     if(abs(st.top()) > abs(asteroids[i])){
//                         break;
//                     }
//                     else if(abs(st.top())==abs(asteroids[i])){
//                         flag=1;
//                         st.pop();
//                         break;
//                     }
//                     else{
//                         st.pop();
//                     }
//                 }
//                 if(st.empty() && flag==0){
//                     st.push(asteroids[i]);
//                 }
//             }
//         }
//         vector<int> v;
//         if(st.empty()){
//             return v;
//         }
//         while(!st.empty()){
//             v.push_back(st.top());
//             st.pop();
//         }
//         reverse(v.begin(),v.end());
//         return v;
//     }
// };
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stack;
        for(int it:asteroids){
            int flag=1;
            while(!stack.empty() and (stack.top()>0 and it<0)){
                if(abs(stack.top())<abs(it)){
                    stack.pop();
                    continue;
                } else if(abs(stack.top())==abs(it)) stack.pop();
                flag=0;
                break;
            }
            if(flag) stack.push(it);
        }
        vector<int> ans(stack.size());
        for(int i=ans.size()-1;i>=0;i--){
            ans[i]=stack.top();
            stack.pop();
        }
        return ans;
    }
};