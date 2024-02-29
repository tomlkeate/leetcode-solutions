int secondHighest(char* s) {
    int prev = -1, max = -1;
    char c;
    while (c = *s) {
        c -= '0';
        if (c >= 0 && c <= 9) {
            if (c > prev && c < max)
                prev = c;
            else if (c > max) {
                prev = max;
                max = c;
            }
        }
        s++;
    }
    return prev;
}
