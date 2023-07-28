class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        solution = [1] * len(nums)
        prefix, postfix = (1,1)
        for i in range(len(nums)):
            solution[i] = prefix
            prefix =  prefix * nums[i]
        for i in range(len(nums) -1, -1, -1):
            solution[i] = postfix * solution[i]
            postfix = postfix * nums[i]
        return solution
