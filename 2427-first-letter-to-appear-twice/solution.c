char repeatedCharacter(char* s) {
    unsigned int bitArray = 0;
    for (;*s != '\0'; s++) {
        if (bitArray & (1 << (*s - 'a'))) {
            return *s;
        }
        bitArray |= (1 << (*s - 'a'));
    }
    return '\0';
}
