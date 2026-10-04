class Solution:
    def solve(self, cost: List[int], i : int, memo: List[int])->int:
        if i >= len(cost):
            return 0
        if memo[i] != -1:
            return memo[i]   
        memo[i] =min(self.solve(cost, i+1,memo),self.solve(cost, i+2,memo)) + cost[i]     
        return memo[i]  

    def minCostClimbingStairs(self, cost: List[int]) -> int:
        memo = [-1]*len(cost)
        a = self.solve(cost,0,memo)
        b = self.solve(cost,1,memo)
        return min(a,b)
         