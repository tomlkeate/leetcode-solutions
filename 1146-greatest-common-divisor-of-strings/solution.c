char * gcdOfStrings(char * str1, char * str2){
    int l_str1 = 1, l_str2 = 1;

    for (; str1[l_str1] != '\0'; l_str1++);
    for (; str2[l_str2] != '\0'; l_str2++);

    char * cat_str1 = malloc( (l_str1 + l_str2 + 1) * sizeof(char));
    char * cat_str2 = malloc( (l_str1 + l_str2 + 1) * sizeof(char));

    int i;
    for (i = 0; str1[i]; i++) cat_str1[i] = str1[i];
    cat_str1[i] = '\0';
    strcat(cat_str1, str2);

    for (i = 0; str2[i]; i++) cat_str2[i] = str2[i];
    cat_str2[i] = '\0';
    strcat(cat_str2, str1);

    if (strcmp(cat_str1, cat_str2)) {
        free(cat_str1);
        free(cat_str2);
        char * str3 = malloc(sizeof(char));
        str3[0] = '\0';
        return str3;
    }

    free(cat_str1);
    free(cat_str2);

    // find gcd
    int numerator = (l_str1 > l_str2) ? l_str1 : l_str2;
    int denominator = (l_str1 < l_str2) ? l_str1 : l_str2;
 
    int remainder = denominator;
    while (numerator % denominator != 0){
        remainder = numerator % denominator;
        numerator = denominator;
        denominator = remainder;
    }

    if (remainder == 1 && str1[0] != str2[0]) {
        char * str3 = malloc(sizeof(char));
        str3[0] = '\0';
        return str3;
    }

    char * str4 = malloc((remainder + 1) * sizeof(char));
    int substr_location = 0;
    for (; substr_location < remainder; substr_location++) {
        str4[substr_location] = str2[substr_location];
    }

    str4[substr_location] = '\0';
    return str4;
}
