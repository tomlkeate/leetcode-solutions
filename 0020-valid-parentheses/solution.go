func isValid(s string) bool {
    stack := []rune{}
    matches := map[rune]rune{
        ')': '(',
        '}': '{',
        ']': '[',
    }
    for _, r := range s {
        if len(stack) > 0 && (stack[len(stack)-1] == matches[r]) {
            stack = stack[:len(stack)-1]
        } else {
            stack = append(stack, r)
        }
    }
    return len(stack) == 0
}
