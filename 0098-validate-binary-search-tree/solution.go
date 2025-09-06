/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func isValidBST(root *TreeNode) bool {
    current := root
    stack := []*TreeNode{}
    var prev *TreeNode
    for current != nil || len(stack) != 0 {
        for current != nil {
            stack = append(stack, current)
            current = current.Left
        }

        current = stack[len(stack) - 1]
        stack = stack[:len(stack) - 1]

        if prev != nil && prev.Val >= current.Val {
            return false
        }

        prev = current

        current = current.Right
    }
    return true
}
