class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> mp;
        unordered_map<string,int> cmp;
        istringstream ss(s);
        string word;
        int i=0;
        while(ss >> word){
            mp[pattern[i]]=word;
            cmp[word]++;
            i++;
        }
        if(mp.size()!=cmp.size()){
            return false;
        }
        string res="";
        for(int i=0;i<pattern.size();i++){
            if(i==pattern.size()-1){
                res = res + mp[pattern[i]];
                continue;
            }
            res = res + mp[pattern[i]] + " ";
        }
        if(res==s){
            return true;
        }
        return false;

    }
};