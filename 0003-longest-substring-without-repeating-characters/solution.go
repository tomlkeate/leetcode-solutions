func lengthOfLongestSubstring(s string) int {
    longest := 0
    start := 0
    last_location := make(map[rune]int)
    for end, char := range s {
        if loc, exists := last_location[char]; exists {
            if loc >= start {
                start = loc + 1
            }
        }
        last_location[char] = end
        current :=  end - start + 1 
        if current > longest {
            longest = current
        }
    }
    return longest
}
