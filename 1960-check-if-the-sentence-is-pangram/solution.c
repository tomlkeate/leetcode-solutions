bool checkIfPangram(char* sentence) {
    unsigned int bitArray = 0;
    for (;*sentence != '\0'; sentence++)
        bitArray |= 1<<(*sentence - 'a');
    return bitArray == 67108863;
}
