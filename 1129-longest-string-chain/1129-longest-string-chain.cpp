class Solution {
public:
    static bool cmp(string s1,string s2){
        return s1.length() < s2.length();
    }
    int longestStrChain(vector<string>& words) {
        sort(words.begin(),words.end(),cmp);
        unordered_map<string,int>mp;
        int ans = 0;
        for(string word:words){
            int len = 0;
            for(int i = 0;i < word.length();i++){
                string temp = word;
                temp.erase(i,1);
                len = max(len,mp[temp] + 1 );
            } 
            mp[word] = len;
            ans = max(ans,len);
        }
        return ans;
    }
};