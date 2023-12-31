bool isPalindrome(char* s) {
    int left = 0, right = strlen(s) - 1;
    while (left <= right) {
        while (right > left && !isalnum(s[right])) right--;
        while (left < right && !isalnum(s[left])) left++;
        //if (s[right] <= 'Z' && s[right] >= 'A') s[right] += 'a' - 'A';
        //if (s[left] <= 'Z' && s[left] >= 'A') s[left] += 'a' - 'A';
        if (tolower(s[left]) != tolower(s[right])) return false;
        left++;
        right--;
    }
    return true;
}
