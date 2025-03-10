func isAnagram(s string, t string) bool {
    letters := make([]int, 26)
    for _, letter := range s {
        letters[letter - 'a']++
    }
    for _, letter := range t {
        letters[letter - 'a']--
        if letters[letter - 'a'] < 0 {
            return false
        }
    }
    for _, value := range letters {
        if value != 0 {
            return false
        }
    }
    return true
}
