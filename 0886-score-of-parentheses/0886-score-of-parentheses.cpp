class Solution {
public:
    int scoreOfParentheses(string s) {
        int score=0;
        int d=0;
        char prev = '(';
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                d++;
            }
            else{
                d--;
                if(prev == '('){
                    score = score + pow(2,d);
                }
            }
            prev = s[i];
        }
        return score;
    }
};