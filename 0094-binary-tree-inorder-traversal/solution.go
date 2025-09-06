/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func inorderTraversal(root *TreeNode) []int {
    ans := []int{}
    if root == nil {
        return []int{}
    }
    if root.Left != nil {
        ans = append(ans, inorderTraversal(root.Left)...)
    }
    ans = append(ans, root.Val)
    if root.Right != nil {
        ans = append(ans, inorderTraversal(root.Right)...)
    }
    return ans
    // current := root
    // stack := []*TreeNode{}
    // for current != nil || len(stack) != 0 {
    //     for current != nil {
    //         stack = append(stack, current)
    //         current = current.Left
    //     }
    //     current = stack[len(stack) - 1]
    //     stack = stack[:len(stack) - 1]

    //     ans = append(ans, current.Val)

    //     current = current.Right
    // }
    return ans
}
