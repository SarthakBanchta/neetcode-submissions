class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        nums.sort()
        left = 0;
        for right in range(1,len(nums)):
            if nums[left] == nums[right]:
                return True
            else:
                left = left + 1
        return False        