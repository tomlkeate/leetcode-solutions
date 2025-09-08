// my first solution but modifies arrays so isn't a valid solution
// func findDuplicate(nums []int) int {
//     for {
//         for i, num := range nums {
//             if num == -1 {
//                 continue
//             }
//             if nums[num] == -1 {
//                 return num
//             }
//             nums[i] = nums[num]
//             nums[num] = -1
//         }
//     }
// }

// Floyd's Tortoise and Hare algorithm
func findDuplicate(nums []int) int {
    slow := nums[0]
    fast := nums[0]
    // find the itersection
    for {
        fast = nums[nums[fast]]
        slow = nums[slow]
        if slow == fast {
            break
        }
    }
    // find the cycle
    slow = nums[0]
    for fast != slow {
        fast = nums[fast]
        slow = nums[slow]
    }
    return slow
}
