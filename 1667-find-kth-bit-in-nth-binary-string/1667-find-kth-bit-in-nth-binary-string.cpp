class Solution {
public:
    string revers(string r){
        reverse(r.begin(),r.end());
        return r;
    }
    string invert(string s){
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='1')s[i]='0';
            else s[i]='1';
        }
        return s;
    }
    char findKthBit(int n, int k) {
        string ans="0";
        for(int i=0;i<n;i++){
            string temp1=invert(ans);
            temp1=revers(temp1);
            ans=ans+"1"+temp1;
        }
        return ans[k-1];
    }
};