func isAnagram(s string, t string) bool {
    if len(s) != len(t) {
        return false
    }
    letters := [26]int{}
    for _, c := range s {
        letters[c - 'a']++
    }
    for _, c := range t {
        letters[c - 'a']--
        if letters[c - 'a'] < 0 {
            return false
        }
    }
    return true
}
