class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        if target in  nums:
            return nums.index(target)
        if nums[len(nums)-1]<target:
            return len(nums)
        for i in range(len(nums)):
            if nums[i]>target:
                return i