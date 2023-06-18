class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        index=0;mx=nums[0]
        for i in range(1,len(nums)):
            if nums[i]>mx:
                index=i
                mx=nums[i]
        del nums[index]
        return (max(nums)-1)*(mx-1)