// class Solution {
// public:
//     string frequencySort(string s) {
//         unordered_map<char,int> mp;
//         for(int i=0;i<s.size();i++){
//             mp[s[i]]++;
//         }
//         s="";
//         vector<pair<char, int>> pr(mp.begin(), mp.end());
//         sort(pr.begin(), pr.end(), [](const auto& a, const auto& b) {
//             return a.second > b.second;
//         });
//         // string res="";
//         for(auto i : pr){
//             if(i.second>1){
//                 int c = 0;
//                 while(c<i.second){
//                     s = s + i.first;
//                     c++;
//                 }
//             }
//             else{
//                 s = s + i.first;
//             }
//         }
//         // cout<<res;
//         return s;

//     }
// };
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        s="";
        vector<pair<char,int>>vec(mp.begin(), mp.end());

    sort(vec.begin(), vec.end(), [](const pair<char,int>& a, const pair<char, int>& b) {
        return a.second > b.second;
    });
        for(auto i:vec){
            
            if(i.second>1){
                int count=0;
                while(count<i.second){
                    s+=i.first;
                    count++;
                }
            }
            else
            s+=i.first;
        }
        return s;
    }

};