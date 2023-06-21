# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def averageOfLevels(self, root: Optional[TreeNode]):
        if not root:
            return []
        storage = [root]
        result = []
        while len(storage) > 0:
            size = len(storage)
            currentVal = 0
            for _ in range(size):
                current = storage.pop(0)
                currentVal += current.val
                if current.left:
                    storage.append(current.left)
                if current.right:
                    storage.append(current.right)
            result.append(currentVal / size)
        return result

