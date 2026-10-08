class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        maxi = nums[0]
        curr = nums[0]
        for i in range(1,len(nums)):
            curr = max(nums[i],nums[i] + curr)
            maxi = max(curr,maxi)
        return maxi
        