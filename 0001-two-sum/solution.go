func twoSum(nums []int, target int) []int {
    store := make(map[int]int)
    for i, num := range nums {
        if j, exists := store[target - num]; exists {
            return []int{i, j}
        }
        store[num] = i
    }
    return []int{}
}
