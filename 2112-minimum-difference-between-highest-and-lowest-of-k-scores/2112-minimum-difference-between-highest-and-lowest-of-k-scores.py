class Solution:
    def minimumDifference(self, nums: List[int], k: int) -> int:
        if(len(nums)==1):
            return 0
        if(len(nums)<k):
            return 0
        nums.sort()
        mn=9999999
        for i in range(0,len(nums)-k+1):
            mn = min(mn,(max(nums[i:i+k])-min(nums[i:i+k])))
        # print(mn)
        return mn
