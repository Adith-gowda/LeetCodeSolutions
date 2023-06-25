class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        if target not in nums:
            return [-1,-1]
        else:
            a = nums.index(target)
            b=-1
            for i in range(len(nums)-1,-1,-1):
                if nums[i]==target:
                    b=i
                    break
        return [a,b]