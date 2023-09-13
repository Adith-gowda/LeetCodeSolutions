class Solution {
public:
    bool isHappy(int n) {
        int sum=0;
        if(n == 1 || n == 7){
            return true;
        }
        else if(n < 10){
            return false;
        }
        while(n != 0){
            int digit = n%10;
            sum = sum + digit*digit;
            n = n/10;
        }
        if(sum == 1){
            return true;
        }
        else{
            return isHappy(sum);
        }
    }
};