class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        s=set(nums)
        l=[[nums.count(i),i] for i in s]
        l.sort(reverse=True)
        lnew=[l[j][1] for j in range(0,k)]
        return lnew
            