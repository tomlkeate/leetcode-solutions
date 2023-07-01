# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        if not root and not subRoot:
            return True
        if not root or not subRoot:
            return False
        def isMatch(root, subRoot):
            if not root and not subRoot:
                return True
            if not root or not subRoot:
                return False
            return root.val == subRoot.val and isMatch(root.left, subRoot.left) and isMatch(root.right, subRoot.right)
        if isMatch(root, subRoot):
            return True
        if not root: return False
        return self.isSubtree(root.left, subRoot) or self.isSubtree(root.right, subRoot)     
