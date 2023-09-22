class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()>t.size()) return false;
        else if(s.size()==t.size()){
            if(s!=t) return false;
            return true;
        }
        else{
            int k=0;
            for(int i=0;i<t.size();i++){
                if(t[i]==s[k]) k++;
            }
            if(k>=s.size()) return true;
        }
        return false;
    }
};