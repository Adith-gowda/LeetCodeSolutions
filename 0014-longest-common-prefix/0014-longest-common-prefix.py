class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        t=strs[0];test=[]
        for i in range(1,len(t)+1):
            flag=0
            for j in range(len(strs)):
                if t[0:i] in strs[j][0:i]:
                    flag=1
                else:
                    flag=0
                    break
            if flag==1:
                test.append(t[0:i])
        if len(test)==0:
            return ""
        mx=test[0]
        for i in range(1,len(test)):
            if len(test[i]) > len(mx):
                mx=test[i]
        return mx

                    