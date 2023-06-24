class Solution:
    def maximumNumberOfStringPairs(self, words):
        # c=0
        # dic={}
        # for i in words:
        #     if i[::-1] in dic:
        #           dic[i[::-1]]+=1
        #           c+=1
        #     if i not in dic:
        #         dic[i]=0
        # return c
        c=0
        dic={}
        for i in words:
            if i[::-1] in dic:
                dic[i[::-1]]+=1
                c+=1
            if i not in dic:
                dic[i]=0
        return c