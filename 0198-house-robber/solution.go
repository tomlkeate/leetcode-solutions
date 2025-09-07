func rob(nums []int) int {
    if len(nums) == 0 {
        return 0
    } else if len(nums) == 1 {
        return nums[0]
    }
    two_back := nums[0]
    prev := max(nums[0], nums[1])
    for i := 2; i < len(nums); i++ {
        prev, two_back = max(two_back + nums[i], prev), prev
    }
    return prev
}
