bool isAnagram(char* s, char* t) {
    unsigned int bitStr1[26] = {0};
    for (; *s != '\0'; s++) {
        bitStr1[*s - 'a']++;
    }
    for (; *t != '\0'; t++) {
        bitStr1[*t - 'a']--;
        if (bitStr1[*t - 'a']  < 0)
            return false;
    }
    for (int i = 0; i < 26; i++) {
        if (bitStr1[i] != 0) return false;
    }
    return true;
}
