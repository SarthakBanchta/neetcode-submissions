class Solution:
    def climbStairs(self, n: int) -> int:
        s = [0]*(n+1)
        if(n <= 1):
            return n
        s[1] = 1
        s[2] = 2
        for i in range(3,n+1):
            s[i] = s[i-1]+s[i-2]
        return s[n]    