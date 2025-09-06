type candidate struct {
    char rune
    index int
}

func firstUniqChar(s string) int {
    queue := []candidate{}
    history := [26]int{}
    for i, c := range s {
        history[c - 'a']++
        count := history[c - 'a']
        if count == 1 {
            queue = append(queue, candidate{ char: c, index: i })
        }
        for len(queue) > 0 && history[queue[0].char - 'a'] > 1 {
            queue = queue[1:]
        }
    }
    if len(queue) == 0 {
        return -1
    }
    return queue[0].index
}
