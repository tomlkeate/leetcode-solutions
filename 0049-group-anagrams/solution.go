func groupAnagrams(strs []string) [][]string {
    store := make(map[[26]int][]string)
    for _, str := range strs {
        hash := [26]int{}
        for _, c := range str {
            hash[c - 'a']++
        }
        if strings, exists := store[hash]; exists {
            store[hash] = append(strings, str)
        } else {
            store[hash] = []string{str}
        }
    }
    ans := [][]string{}
    for _, value := range store {
        ans = append(ans, value)
    }
    return ans
}
