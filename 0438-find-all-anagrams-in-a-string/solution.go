func findAnagrams(s string, p string) []int {
    ans := []int{}
    if len(s) < len(p) {
        return ans
    }
    key := [26]int{}
    currentKey := [26]int{}
    for i, c := range p {
        key[c - 'a']++
        currentKey[s[i] - 'a']++
    }        
    if currentKey == key {
        ans = append(ans, 0)
    }
    for i := len(p); i < len(s); i++ {
        currentKey[s[i - len(p)] - 'a']--
        currentKey[s[i] - 'a']++
        if currentKey == key {
            ans = append(ans, i - len(p) + 1)
        }
    }
    return ans
}
