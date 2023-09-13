class Solution {
public:
    string simplifyPath(string path) {
       stack<string>st;
       int n = path.length();
       for(int i =0; i< path.length();i++){
           if(path[i]=='/') continue;
           string tmp = "";
           while(i < n && path[i] != '/'){
               tmp += path[i];
               i++;
           }
           if(tmp == ".."){
               if(!st.empty()){
                   st.pop();
               }

           }
           else if (tmp == "."){
               continue;
           }
           else{
               st.push(tmp);
           }
       }
       string res = "";
       while(!st.empty()){
           res = "/"+st.top()+res;
           st.pop();
       }
       if(res.size() == 0) return "/";
       return res;
    }
};