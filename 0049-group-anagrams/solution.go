func groupAnagrams(strs []string) [][]string {
    index_map := make(map[[26]int]int, 0)
    result := make([][]string, 0)
    for _, str := range strs {
        slice := [26]int{}
        for _, char := range str {
            slice[char - 'a']++
        }
        if index, exists := index_map[slice]; exists {
            result[index] = append(result[index], str)
        } else {
            index_map[slice] = len(result)
            result = append(result, []string{str})
        }
    }
    return result
}
