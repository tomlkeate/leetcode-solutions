/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func reverseList(head *ListNode) *ListNode {
    var previous *ListNode
    current := head
    for current != nil {
        next_current := current.Next
        current.Next = previous
        previous = current
        current = next_current
    }
    return previous
}
