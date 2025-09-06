func groupAnagrams(strs []string) [][]string {
    index_map := make(map[[26]int]int)
    result := [][]string{}
    for _, str := range strs {
        key := [26]int{}
        for _, c := range str {
            key[c - 'a']++
        }
        index, exists := index_map[key]
        if !exists {
            index_map[key] = len(result)
            result = append(result, []string{str})
        } else {
            result[index] = append(result[index], str)
        }
    }
    return result
}
