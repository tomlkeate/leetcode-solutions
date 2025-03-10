func containsDuplicate(nums []int) bool {
    values := make(map[int]bool)
    for _, i := range nums {
        _, exists := values[i]
        if exists {
            return true
        }
        values[i] = true
    }
    return false
}
