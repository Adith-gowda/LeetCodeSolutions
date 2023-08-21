class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string temp = s; 
        for(int i=0; i<s.size()-1; i++){ 
            char c = temp[0];
            temp.erase(0,1);
            temp.push_back(c); 

            if(temp==s) { 
                return true; 
            }
        }
        return false;
    }
};