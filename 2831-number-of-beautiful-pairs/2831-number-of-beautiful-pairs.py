from math import gcd
def coprime(a, b):
    return gcd(a, b) == 1
class Solution:
    def countBeautifulPairs(self, nums: List[int]) -> int:
        n = len(nums)
        count = 0
        for i in range(n-1):
            for j in range(i + 1, n):
                if coprime(nums[i] // 10**(len(str(nums[i]))-1), nums[j] % 10):
                    count += 1
        return count