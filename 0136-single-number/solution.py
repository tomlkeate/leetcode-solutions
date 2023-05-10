class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        is_candidate = nums[0]
        for i in range(1, len(nums)):
            is_candidate ^= nums[i]
        return is_candidate
