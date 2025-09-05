/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func addTwoNumbers(l1 *ListNode, l2 *ListNode) *ListNode {
    dummy := &ListNode{}
    l3 := dummy
    leftover := 0
    for l1 != nil && l2 != nil {
        val := (l1.Val + l2.Val + leftover) % 10
        leftover = (l1.Val + l2.Val + leftover) / 10
        l3.Next = &ListNode{
            Val: val,
        }
        l3 = l3.Next
        l1 = l1.Next
        l2 = l2.Next
    }
    for l1 != nil  {
        val := (l1.Val + leftover) % 10
        leftover = (l1.Val + leftover) / 10
        l3.Next = &ListNode{
            Val: val,
        }
        l3 = l3.Next
        l1 = l1.Next
    }
    for l2 != nil {
        val := (l2.Val + leftover) % 10
        leftover = (l2.Val + leftover) / 10
        l3.Next = &ListNode{
            Val: val,
        }
        l3 = l3.Next
        l2 = l2.Next
    }
    if leftover != 0 {
        l3.Next = &ListNode{
            Val: leftover,
        }
    }
    return dummy.Next
}
