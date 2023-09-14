class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int i = a.size()-1;
        int j = b.size()-1;
        int sum=0;
        int carry=0;
        while(i>=0 || j>=0){
            if(i>=0){
                sum = sum + a[i]-'0';
            }
            if(j>=0){
                sum = sum + b[j]-'0';
            }
            if((sum+carry)==2){
                carry = 1;
                ans = "0" + ans;
            }
            else if((sum+carry)==3){
                carry = 1;
                ans = "1" + ans;
            }
            else{
                sum = sum + carry;
                if(sum){
                    ans = "1" + ans;
                    carry = 0;
                }
                else{
                    ans = "0" + ans;
                    carry = 0;
                }
            }
            sum = 0;
            i--;
            j--;
        }
        if(carry){
            ans = "1" + ans;
            return ans;
        }
        return ans;
    }
};