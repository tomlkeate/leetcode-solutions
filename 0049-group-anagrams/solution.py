class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        hashmap = {}
        for string in strs:
            key = "".join(sorted(string))
            hashmap[key] = hashmap.get(key, []) + [string]
        return hashmap.values()
