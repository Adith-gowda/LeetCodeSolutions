class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        s=set(nums)
        s=list(s)
        if len(s)==len(nums):
            return False
        else:
            return True