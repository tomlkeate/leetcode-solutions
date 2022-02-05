class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        targetDictionary = {}
        index = 0
        for num in nums:
            neededValue = target - num
            if neededValue in targetDictionary:
                return [index, targetDictionary[neededValue]]
            targetDictionary[num] = index
            index += 1
