bool backspaceCompare(char * s, char * t){
    int sPtr = strlen(s) - 1, tPtr = strlen(t) - 1;
    int sSkips = 0, tSkips = 0;
    while (sPtr >= 0 || tPtr >= 0) {
        while (sPtr >= 0) {
            if (s[sPtr] == '#') {
                sPtr--; sSkips++;
            } else if (sSkips > 0) {
                sPtr--; sSkips--;
            } else break;
        }
        while (tPtr >= 0) {
            if (t[tPtr] == '#') {
                tPtr--;tSkips++;
            } else if (tSkips > 0) {
                tPtr--;tSkips--;
            } else break;
        }
        if (sPtr >= 0 && tPtr >= 0 && s[sPtr] != t[tPtr])
            return false;
        if (sPtr >= 0 != tPtr >= 0)
            return false;
        sPtr--;tPtr--;
    }
    return true;
}
