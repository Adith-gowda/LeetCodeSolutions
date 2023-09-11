class Solution {
public:
    int romanToInt(string s) {
          map<char, int> romanMap;
        romanMap.insert({'I', 1});
        romanMap.insert({'V', 5});
        romanMap.insert({'X', 10});
        romanMap.insert({'L', 50});
        romanMap.insert({'C', 100});
        romanMap.insert({'D', 500});
        romanMap.insert({'M', 1000});
        int result = romanMap[s.length()-1];  
        for (int i = s.length() - 1; i >= 0; i--) {
            if (romanMap[s[i]] < romanMap[s[i + 1]]) {
                result -= romanMap[s[i]];
            } else {
                result += romanMap[s[i]];
            }
        }
        return result;
    }
};
