class Solution(object):
    def lengthOfLastWord(self, s):
        l=s.strip().split(" ")
        return (len(l[len(l)-1]))