class Solution:
    def appendCharacters(self, s: str, t: str) -> int:
        n=len(t);m=len(s)
        k=0;l=0;count=0;split=-1
        while(l<m):
            if t[k] not in s[l:len(s)]:
                split=k
                break
            if t[k]==s[l]:
                k+=1
                count+=1
                if count==n:
                    return 0
            l+=1
        return len(t[k:len(t)])