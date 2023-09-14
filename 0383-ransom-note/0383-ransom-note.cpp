class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        for(int i=0;i<ransomNote.size();i++){
            mp1[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.size();i++){
            mp2[magazine[i]]++;
        }
        for(auto p : mp1){
            if(mp2[p.first]>=mp1[p.first]) continue;
            else return false;
        }
        return true;
    }
};