# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        if (not p and not q):
            return True
        elif (not p or not q):
            return False
        p_queue = deque()
        q_queue = deque()
        p_queue.append(p)
        q_queue.append(q)
        while len(p_queue) > 0 and len(q_queue) > 0:
            if (len(q_queue) != len(p_queue)):
                return False
            Size = len(q_queue)
            for _ in range(Size):
                left = p_queue.popleft()
                right = q_queue.popleft()
                if not (left and right):
                    return False
                elif left.val != right.val:
                    return False
                if left.left or right.left:
                    p_queue.append(left.left)
                    q_queue.append(right.left)
                if left.right or right.right:
                    p_queue.append(left.right)
                    q_queue.append(right.right)
        if len(p_queue) > 0 or len(q_queue) > 0:
            return False
        return True

