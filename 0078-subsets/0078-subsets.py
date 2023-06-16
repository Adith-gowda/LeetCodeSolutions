class Solution(object):
    def subsets(self, nums):
        a= [[]]
        for n in nums:
            for i in range(len(a)):
                a.append(a[i] + [n])
        return a