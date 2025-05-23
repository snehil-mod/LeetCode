int strStr(char * haystack, char * needle) {
    if (!*needle) return 0; // empty needle

    int i, j;
    for (i = 0; haystack[i] != '\0'; i++) {
        for (j = 0; needle[j] != '\0'; j++) {
            if (haystack[i + j] != needle[j]) break;
        }
        if (needle[j] == '\0') return i; // full match found
    }

    return -1; // not found
}
