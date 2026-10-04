class Solution:
    def solve(self, nums:List[int], idx: int, memo : List[int]) -> int:
        if(idx >= len(nums)):
             return 0
        if(memo[idx] != -1):
            return memo[idx]     
        choose = nums[idx] + self.solve(nums, idx+2,memo)
        no = self.solve(nums, idx+1,memo)
        memo[idx] = max(choose,no)
        return memo[idx]
        
    def rob(self, nums: List[int]) -> int:
        memo = [-1]*len(nums)
        return self.solve(nums, 0, memo )