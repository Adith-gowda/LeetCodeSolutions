class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if not(len(s) == len(t)):
            return False
        flag = 0
        for i in range(len(s)):
            if s[i] in t:
                if (s.count(s[i]) == t.count(t[t.find(s[i])])):
                    flag = 1
                else:
                    flag = 0
                    return False
            else:
                return False
        if flag == 1:
            return True
        return False