class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        if s in t:
            return True
        if len(s)==0:
            return True
        if len(s)==1:
            if s not in t:
                return False
            else:
                return True
        n=len(s)
        m=len(t)
        k=0
        l=0
        count=0
        while(l<m):
            if s[k] not in t[l:len(t)]:
                return False
            if s[k]==t[l]:
                k+=1
                count+=1
                if count==n:
                    return True
            l+=1
        return False

        
