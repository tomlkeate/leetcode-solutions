# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:

        # find middle Node
        middle = head
        current = head
        while(current and current.next):
            middle = middle.next
            current = current.next.next
        
        # Reverse the Nodes from the end to middle Node
        current = middle
        middle = None
        next = None

        while (current):
            next = current.next
            current.next = middle
            middle = current
            current = next

        # check from head to middle and from middle reversed to the end of the reversed Node which ends at the middle
        current = head
        while (middle):
            if middle.val != current.val:
                return False
            middle = middle.next
            current = current.next
        return True
