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
        std::istringstream iss(s);
        std::string word;
        std::string result;

        while(iss >> word){
            std::reverse(word.begin(),word.end());
            result += " " + word;
            word.clear();
        }
        return result.substr(1 , result.size());
    }
};