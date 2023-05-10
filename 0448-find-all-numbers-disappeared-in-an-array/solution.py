class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        result = [0] * (len(nums) + 1)
        solution = []
        for i in range(len(nums)):
            result[nums[i]] = 1
        for j in range(1,len(nums) + 1):
            if not result[j]:
                solution.append(j)
        return solution
