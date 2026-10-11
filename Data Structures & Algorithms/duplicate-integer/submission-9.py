class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        s = set(nums)
        print(nums)
        return len(s) != len(nums)