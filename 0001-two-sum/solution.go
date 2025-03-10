func twoSum(nums []int, target int) []int {
    nums_map:= make(map[int]int)
    for i, number := range nums {
        if location, exists := nums_map[target - number]; exists {
            return []int{i, location}
        }
        nums_map[number] = i
    }
    return nil
}
