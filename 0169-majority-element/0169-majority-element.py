class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        set1=set(nums)
        l=list(set1)
        for i in l:
            if nums.count(i) > (len(nums)//2):
                return i