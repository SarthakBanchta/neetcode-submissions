class Solution:

    def coinChange(self, coins: List[int], amount: int) -> int:
        n = len(coins)
        memo = {}
        def solve(rem: int, i:int) -> float:
            if rem == 0:
                return 0
            if rem < 0 or i >= len(coins):
                return float('inf')
            if(rem,i) in memo:
                return memo[(rem,i)]   
            choose = 1+ solve(rem - coins[i] , i)
            no = solve(rem, i+1)

            memo[(rem,i)] = min(choose,no)
            return min(choose,no)    
        res = solve(amount,0)   
        return res if res != float('inf') else -1
            