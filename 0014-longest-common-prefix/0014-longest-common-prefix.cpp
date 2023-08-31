class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string l = strs[0];
        string r = strs[strs.size()-1];
        int n = min(l.size(),r.size());
        string res="";
        for(int i=0;i<n;i++){
            if(l[i]!=r[i]){
                return res;
            }
            res+=l[i];
        }
        return res;
    }
};