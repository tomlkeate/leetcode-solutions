char * reverseVowels(char * s){
    int length = strlen(s);
    if (length == 0) return s;
    int leftptr = 0;
    int rightptr = length - 1;
    bool is_vowel(char c) {
        return (c == 'a' || c=='e' || c=='i' || c=='o' || c=='u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }
    while (leftptr <= rightptr) {
        if (is_vowel(s[leftptr])) {
            if (is_vowel(s[rightptr])) {
                char temp = s[leftptr];
                s[leftptr] = s[rightptr];
                s[rightptr] = temp;
                leftptr++;
                rightptr--;
            } else {
                rightptr--;
            }
        } else if (is_vowel(s[rightptr])) {
            leftptr++;
        } else {
            leftptr++;
            rightptr--;
        }
    }
    return s;
}
