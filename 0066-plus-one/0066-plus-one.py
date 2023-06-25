class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        s="";k=[]
        l=list(map(str,digits))
        for i in l:
            s=s+i
        s=int(s)
        s=s+1
        s=str(s)
        for i in s:
            k.append(int(i))
        return k
        
            
                