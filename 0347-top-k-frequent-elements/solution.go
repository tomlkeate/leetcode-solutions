func topKFrequent(nums []int, k int) []int {
    counts := make(map[int]int, len(nums))
    for _, num := range nums {
        counts[num]++
    }
    freqs := make([][]int, len(nums) + 1)
    for num, cnts := range counts {
        freqs[cnts] = append(freqs[cnts], num)
    }
    output := make([]int, k)
    j := 0
    for i := len(nums); i >= 0; i-- {
        for _, num := range freqs[i] {
            output[j] = num
            if j++; j == k {
                return output
            }
        }
    }
    return nil
}
