# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minDepth(self, root: Optional[TreeNode]) -> int:
        if not root:
            return 0
        result = []
        storage = deque()
        storage.append(root)
        currentLevel = 0
        while len(storage) > 0:
            size = len(storage)
            currentLevel+=1
            for _ in range(size):
                current = storage.popleft()
                if not current.left and not current.right:
                    return currentLevel
                if current.left:
                    storage.append(current.left)
                if current.right:
                    storage.append(current.right)
