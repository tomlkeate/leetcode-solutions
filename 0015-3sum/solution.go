import "slices"
func threeSum(nums []int) [][]int {
    ans := [][]int{}
    slices.Sort(nums)
    for i := 0; i < len(nums) - 2; i++ {
        if i > 0 && nums[i] == nums[i - 1] {
            continue
        }
        for left, right := i + 1, len(nums) - 1; left < right; {
            sum := nums[i] + nums[left] + nums[right]
            if sum < 0 {
                left++
            } else if sum > 0 {
                right--
            } else {
                ans = append(ans, []int{nums[i], nums[left], nums[right]})
                prevLeft := nums[left]
                prevRight := nums[right]
                left++
                right--
                for left < right && nums[left] == prevLeft {
                    left++
                }
                for left < right && nums[right] == prevRight {
                    right--
                }
            }
        }
    }
    return ans
}
