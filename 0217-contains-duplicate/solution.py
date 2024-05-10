class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        sets = set()
        for num in nums:
            if num in sets:
                return True
            sets.add(num)
        return False
