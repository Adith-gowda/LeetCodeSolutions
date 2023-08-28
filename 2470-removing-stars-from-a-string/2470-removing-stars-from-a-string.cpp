class Solution {
public:
    string removeStars(string s) {
        vector<char> v;
        string res = "";
        for(int i=0;i<s.size();i++){
            if(v.begin()==v.end() && s[i]!='*'){
                v.push_back(s[i]);
                continue;
            }
            if(s[i]=='*'){
                v.pop_back();
                continue;
            }
            v.push_back(s[i]);
        }
        if(v.begin()==v.end()){
            return "";
        }
        for(auto p : v){
            res+=p;
        }
        return res;
    }
};