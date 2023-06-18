class Solution:
    def findValueOfPartition(self, nums: List[int]) -> int:
        nums.sort()
        if(len(nums)==2):
            return abs(nums[0]-nums[1])
        else:
            mn=abs(nums[0]-nums[1])
            for i in range(1,len(nums)-1):
                if (abs(nums[i]-nums[i+1]) < mn):
                    mn = abs(nums[i]-nums[i+1])
            return mn