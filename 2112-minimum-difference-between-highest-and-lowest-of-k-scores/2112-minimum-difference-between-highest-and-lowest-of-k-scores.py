class Solution:
    def minimumDifference(self, nums: List[int], k: int) -> int:
        if(len(nums)==1):
            return 0
        nums.sort()
        mn=9999999
        for i in range(0,len(nums)-k+1):
            mn = min(mn,(nums[i+k-1]-nums[i]))
        # print(mn)
        return mn
