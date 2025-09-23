func containsDuplicate(nums []int) bool {
    nums_map := make(map[int]bool)
    for _, num := range nums {
        if _, exists := nums_map[num]; exists {
            return true
        }
        nums_map[num] = true
    }
    return false
}
