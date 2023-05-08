char * mergeAlternately(char * word1, char * word2){
    int word1_length = 0, word2_length = 0;
    for (word1_length; word1[word1_length] != '\0'; word1_length++);
    for (word2_length; word2[word2_length] != '\0'; word2_length++);

    char * return_str = malloc( (word1_length + word2_length + 1) * sizeof(char) );

    int i, word_pos;
    for (i = 0, word_pos = 0; word1[word_pos] && word2[word_pos]; i++, word_pos++) {
        return_str[i] = word1[word_pos];
        i++;
        return_str[i] = word2[word_pos];
    }
    if (word1[word_pos] == '\0') {
        for (i, word_pos; word2[word_pos]; i++, word_pos++) {
            return_str[i] = word2[word_pos];
        }
    } else {
        for (i, word_pos; word1[word_pos]; i++, word_pos++) {
            return_str[i] = word1[word_pos];
        }
    }
    return_str[i] = '\0';
    return return_str;
}
