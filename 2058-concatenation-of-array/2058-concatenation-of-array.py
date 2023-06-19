class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        n=len(nums)
        for i in range(n):
            nums.append(nums[i])
        # print(nums)
        return nums

        