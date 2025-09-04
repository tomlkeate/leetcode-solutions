func twoSum(nums []int, target int) []int {
    nums_map := make(map[int]int)
    for i, num := range nums {
        if index, exists := nums_map[target - num]; exists {
            return []int{i, index}
        }
        nums_map[num] = i
    }
    return nil
}
