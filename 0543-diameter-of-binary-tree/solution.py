# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    depth = 0
    def getDepth(self, root):
        if not root:
            return 0
        left = self.getDepth(root.left);
        right = self.getDepth(root.right)
        self.depth = max(self.depth, left + right)
        return max(left, right) + 1
        
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        self.getDepth(root)
        return self.depth
