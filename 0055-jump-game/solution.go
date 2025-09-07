//dp approach
// func canJump(nums []int) bool {
//     if len(nums) == 1 {
//         return true
//     }
//     dp := make([]bool, len(nums))
//     dp[0] = true
//     for i := 0; i < len(nums) - 1; i++ {
//         if dp[i] {
//             for j := i + 1; j < i + nums[i] + 1 && j < len(dp); j++ {
//                 dp[j] = true
//             }
//         } else {
//             return false
//         }
//     }
//     return dp[len(dp) - 1]
// }

// max reach approach
// func canJump(nums []int) bool {
//     if len(nums) == 1 {
//         return true
//     }
//     max_reach := 0
//     for i, num := range nums {
//         if i > max_reach {
//             return false
//         }
//         if i + num > max_reach {
//             max_reach = i + num
//         }
//     }
//     return max_reach >= len(nums) - 1
// }

// gas approach
func canJump(nums []int) bool {
    if len(nums) == 1 {
        return true
    }
    gas := 0
    for _, num := range nums {
        if gas < 0 {
            return false
        } else if num > gas {
            gas = num
        }
        gas--
    }
    return true
}
