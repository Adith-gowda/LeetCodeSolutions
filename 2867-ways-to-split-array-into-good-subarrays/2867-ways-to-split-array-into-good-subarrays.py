class Solution:
    def numberOfGoodSubarraySplits(self, nums: List[int]) -> int:
        l=[]
        for i in range(len(nums)):
            if nums[i]==1:
                l.append(i)
        if len(l)==1:
            return 1
        if len(l)==0:
            return 0
        t=l[1]-l[0]
        for i in range(1,len(l)-1):
            t*=(l[i+1]-l[i])
        # print(t%(10**9 + 7))
        return t%(10**9 + 7)
        