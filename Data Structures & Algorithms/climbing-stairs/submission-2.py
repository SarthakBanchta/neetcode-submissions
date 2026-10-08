class Solution:
    def climbStairs(self, n: int) -> int:
        s = [0]*(n+1)
        if(n <= 1):
            return n
        a = 1
        b = 2
        for i in range(3,n+1):
            a, b = b, a+b
        return b 