class Solution {
public:
    string convertToTitle(int columnNumber) {
        int t = columnNumber;
        string res="";
        while(t>0){
            if(t%26==0){
                res = "Z"+res;
                t--;
                // continue;
            }
            else{
                res = char(64+t%26) + res;
            }
            // res = char(64+t%26) + res;
            t=t/26;
        }
        return res;
    }
};