bool isSubsequence(char * s, char * t){
    int sPtr = 0;
    for (int tPtr = 0; s[sPtr] != '\0' && t[tPtr] != '\0';tPtr++) {
        if (s[sPtr] == t[tPtr]) {
            sPtr++;
        }
    }
    return s[sPtr] == '\0';
}
