class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap = {}
        for index, num in enumerate(nums):
            candidate = target - num
            if candidate in hashmap:
                return [hashmap[candidate], index]
            hashmap[num] = index
