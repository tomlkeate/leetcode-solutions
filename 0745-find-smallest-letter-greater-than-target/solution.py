class Solution:
    def nextGreatestLetter(self, letters: List[str], target: str) -> str:
        l,r,mid = (0, len(letters)-1, 0)
        while l <= r:
            mid = (l + r) // 2
            if letters[mid] <= target:
                l=mid+1
            else:
                r=mid-1;
        return letters[l] if l < len(letters) else letters[0]

