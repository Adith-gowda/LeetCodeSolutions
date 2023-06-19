class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        n=len(nums)
        for i in range(0,n):
            if nums[i]==0:
                nums.remove(nums[i])
                nums.append(0)