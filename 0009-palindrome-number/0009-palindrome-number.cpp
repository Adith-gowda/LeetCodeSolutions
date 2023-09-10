class Solution {
public:
    bool isPalindrome(int x) {
        int num=x,y,rev=0;
        while(x>0){
        y=x%10;
        if (rev > INT_MAX / 10) {
            return false;
        }
        rev=rev*10+y;
        x=x/10;
        }
        return num==rev;
    }
};