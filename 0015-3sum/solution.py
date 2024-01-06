class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        if len(nums) < 3:
            return []
        solutions = []
        nums.sort()
        for i in range(len(nums)):
            value = []
            if i > 0 and nums[i - 1] == nums[i]:
                continue
            l, r = i + 1, len(nums) - 1
            while l < r:
                if nums[i] + nums[r] + nums[l] > 0:
                    r -= 1
                elif nums[i] + nums[r] + nums[l] < 0:
                    l += 1
                else:
                    solutions.append([nums[i], nums[l], nums[r]])
                    l+=1
                    while nums[l] == nums[l - 1] and l < r:
                        l+=1
        return solutions
