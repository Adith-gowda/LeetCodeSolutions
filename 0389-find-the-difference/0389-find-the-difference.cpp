class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> v(26,0);
        for(char i:s) v[i-'a']+=1;
        for(char i:t){
            v[i-'a']-=1;
            if(v[i-'a']<0){
                return i;
            }
        }
        return ' ';
    }
};