class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> charfreq1(26, 0);
        vector<int> charfreq2(26, 0);
        map<int, int> numfreq1;
        map<int, int> numfreq2;
        int n = word1.size();
        int m = word2.size();
        if(n!=m)    return false;
        for(int i=0;i<n;i++) {
            charfreq1[word1[i]-'a']++;
            charfreq2[word2[i]-'a']++;
        }
        for(int i=0;i<26;i++) {
            if((!charfreq1[i] && charfreq2[i]) || (!charfreq2[i] && charfreq1[i]))
                return false;

            if(!charfreq1[i])
                continue;
    
            numfreq1[charfreq1[i]]++;
            numfreq2[charfreq2[i]]++;
        }
        for(auto i: numfreq1) {
            if(numfreq2[i.first] != i.second)
                return false;
        }
        return true;
    }
};