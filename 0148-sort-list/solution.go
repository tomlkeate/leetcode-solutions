/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */

// first solution came up with
// func sortList(head *ListNode) *ListNode {
//     if head == nil || head.Next == nil {
//         return head
//     }
//     length := 0
//     current := head
//     for current != nil {
//         current = current.Next
//         length++
//     }
//     for sublistSize := 1; sublistSize < length; sublistSize<<=1 {
//         dummyHead := &ListNode{}
//         tail := dummyHead
//         current = head
//         var left, right *ListNode
//         for current != nil {
//             left, current = advance(current, sublistSize)
//             right, current = advance(current, sublistSize)

//             merged := merge(left, right)
//             tail = attachToTail(tail, merged)
//         }
//         head = dummyHead.Next
//     }
//     return head
// }

// func advance(head *ListNode, sublistSize int) (*ListNode, *ListNode) {
//     if head == nil {
//         return nil, nil
//     }
//     current := head
//     for i := 1; i < sublistSize && current.Next != nil; i++ {
//         current = current.Next
//     }
//     next := current.Next
//     current.Next = nil
//     return head, next
// }

// func attachToTail(tail *ListNode, merged *ListNode) *ListNode {
//     tail.Next = merged
//     for tail.Next != nil {
//         tail = tail.Next
//     }
//     return tail
// }

// func merge(left *ListNode, right *ListNode) *ListNode {
//     dummy := &ListNode{}
//     tail := dummy
//     for left != nil && right != nil {
//         if left.Val < right.Val {
//             tail.Next = left
//             left = left.Next
//         } else {
//             tail.Next = right
//             right = right.Next
//         }
//         tail = tail.Next
//     }
//     if left != nil {
//         tail.Next = left
//     } else {
//         tail.Next = right
//     }
//     return dummy.Next
// }

// second solution convert to array
// func sortList(head *ListNode) *ListNode {
//     arr := []int{}
//     current := head
//     for current != nil {
//         arr = append(arr, current.Val)
//         current = current.Next
//     }
//     slices.Sort(arr)
//     current = head
//     for _, num := range arr {
//         current.Val = num
//         current = current.Next
//     }
//     return head
// }

// fast slow recursive solution credit: https://leetcode.com/problems/sort-list/solutions/6621156/conquer-linked-list-sorting-with-merge-sort-a-must-know-interview-power-move
func sortList(head *ListNode) *ListNode {
    if head == nil || head.Next == nil {
        return head
    }
    slow := head
    fast := head
    prev := head
    for fast != nil && fast.Next != nil {
        prev = slow
        slow = slow.Next
        fast = fast.Next.Next
    }
    prev.Next = nil
    left := sortList(head)
    right := sortList(slow)
    return merge(left, right)
}

func merge(left *ListNode, right *ListNode) *ListNode {
    dummy := &ListNode{}
    current := dummy
    for left != nil && right != nil {
        if left.Val < right.Val {
            current.Next = left
            left = left.Next
        } else {
            current.Next = right
            right = right.Next
        }
        current = current.Next
    }
    if left != nil {
        current.Next = left
    } else if right != nil {
        current.Next = right
    }
    return dummy.Next
}
