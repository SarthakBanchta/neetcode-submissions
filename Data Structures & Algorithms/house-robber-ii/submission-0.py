class Solution:
    def solve(self, nums: List[int], i : int, memo : List[List[int]], flag: bool) -> int:
        if( i >= len(nums)):
            return 0
        if(i == len(nums)-1 and flag == True):
            return 0
        f_i = int(flag)
        if(memo[i][f_i] != -1):
            return memo[i][f_i]
        if(i == 0):
            flag = True   
        choose = self.solve(nums,i+2,memo,flag) + nums[i]
        if(i == 0):
            flag = False   
        no = self.solve(nums,i+1, memo,flag)
        memo[i][f_i] = max(choose,no)
        return memo[i][f_i]

    def rob(self, nums: List[int]) -> int:
        if(len(nums) == 0):
             return 0
        memo = [[-1]*2 for k in range(len(nums))]
        return self.solve(nums,0, memo, False)