class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len = word1.size() + word2.size();
        int i=0;
        int j=0;
        string ans="";
        while(len>0){
            if(i<word1.size()){
                ans = ans + word1[i];
                i++;
                len--;
            }
            if(j<word2.size()){
                ans = ans + word2[j];
                j++;
                len--;
            }
        }
        return ans;
    }
};