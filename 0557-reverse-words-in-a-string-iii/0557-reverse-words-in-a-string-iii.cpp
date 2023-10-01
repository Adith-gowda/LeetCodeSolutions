// class Solution {
// public:
//     string reverseWords(string s) {
//         vector<string> v;
//         string str="";
//         for(int i=0;i<s.size();i++){
//             if(s[i]==' ') 
//             {
//                 v.push_back(str);
//                 str="";
//                 continue;
//             }
//             str+=s[i];
//         }
//         v.push_back(str);
//         string ans="";

//         for(int i=0;i<v.size();i++){
//             reverse(v[i].begin(),v[i].end());
//             if(i==v.size()-1){
//                 ans+=v[i];
//                 continue;
//             }
//             ans = ans + v[i] + " ";
//         }

//         return ans;
//     }
// };
class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int start=0;
        for(int i =0; i<s.length(); i++){
            if(s[i] == ' '){
                int temp = i-1;
                while(temp >= start){
                    ans += s[temp];
                    temp--;
                }
                ans += ' ';
                start = i+1;
            }
            
        }
        int temp = s.length()-1;
        while(temp >= start){
                    ans += s[temp];
                    temp--;
                }
        return ans;
        
    }
};