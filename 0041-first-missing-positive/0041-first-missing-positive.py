class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        dic={}
        for i in range(0,len(nums)+2):
            dic[i]=0
        for i in range(len(nums)):
            if nums[i]>0 and nums[i]<=len(nums):
                dic[nums[i]]=1
        for i in range(1,len(nums)+2):
            if dic[i]==0:
                return i


            
        
        
        