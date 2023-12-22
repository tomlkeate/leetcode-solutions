int firstUniqChar(char* s) {
    int allbits = 0, duplicateBits = 0;
    for (int index = 0; index < strlen(s); index++) {
        if (allbits & (1 << s[index] - 'a'))
            duplicateBits |= (1 << s[index] - 'a');
        else
            allbits |= (1 << s[index] - 'a');
    }
    for (int index = 0;index < strlen(s); index++) {
        if (!(duplicateBits & (1 << s[index] - 'a')))
            return index;
    }
    return -1;
}
