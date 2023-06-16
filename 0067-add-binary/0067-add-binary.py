class Solution(object):
    def addBinary(self, a, b):
        s=0;s1=0;h=""
        t=len(a)-1
        for i in a:
            s+=int(i)*(2**t)
            t=t-1
        t=len(b)-1
        for i in b:
            s1+=int(i)*(2**t)
            t=t-1
        s2=s1+s
        if(s2==0):
            return "0"
        while(s2>=1):
            h+=str(s2%2)
            s2=s2/2
        return h[::-1]