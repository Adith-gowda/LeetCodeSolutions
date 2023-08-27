class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
       int len1=str1.length();
       int len2=str2.length();
       if(str1+str2 != str2+str1)
       return "";
       else
       return str2.substr(0,gcd(len1,len2)); 
    }
};