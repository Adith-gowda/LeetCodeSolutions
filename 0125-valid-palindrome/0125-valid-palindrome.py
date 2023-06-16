class Solution:
    def isPalindrome(self, s: str) -> bool:
        new_s = ''.join(i for i in s if i.isalnum()).lower()
        return new_s == new_s[::-1]
            