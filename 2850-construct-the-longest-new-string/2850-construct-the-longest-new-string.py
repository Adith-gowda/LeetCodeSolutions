class Solution:
    def longestString(self, x: int, y: int, z: int) -> int:
        if x==y:
            return (x+y+z)*2
        elif x>y:
            return (y+y+1+z)*2
        else:
            return (x+x+1+z)*2