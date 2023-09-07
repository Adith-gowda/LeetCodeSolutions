class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp;
        set<char> st;
        for(int i=0;i<s.size();i++){
            st.insert(t[i]);
            if(mp.count(s[i])){
                if(mp[s[i]]!=t[i]){
                    return false;
                }
            }
            else{
                mp[s[i]]=t[i];
            }
        }
        return st.size()==mp.size();
    }
};