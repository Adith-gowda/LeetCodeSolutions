class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        nums=set(nums)
        nums=list(nums)
        nums.sort()
        c=0;i=0;mx=-1
        if len(nums)==0:
            return 0
        while(i<len(nums)-1):
            if(nums[i+1]-nums[i])==1:
                c+=1
            else:
                mx=max(mx,c+1)
                c=0
            i+=1
        mx=max(c+1,mx)
        return mx
        # return 0