func longestPalindrome(s string) string {
    ans := [2]int{}
    for current := range s {
        odd := expandFromCenter(s, current, current)
        even := expandFromCenter(s, current, current+1)
        if odd[1] - odd[0] > even[1] - even[0] && odd[1] - odd[0] > ans[1] - ans[0] {
            ans[0] = odd[0]
            ans[1] = odd[1]
        } else if even[1] - even[0] > ans[1] - ans[0] {
            ans[0] = even[0]
            ans[1] = even[1]
        }
    }
    return s[ans[0]: ans[1]+1] 
}

func expandFromCenter(s string, left int, right int) [2]int {
    for left >= 0 && right < len(s) && s[left] == s[right] {
        left--
        right++
    }
    return [2]int{left + 1, right - 1}
}
