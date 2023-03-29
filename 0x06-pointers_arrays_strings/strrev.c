void reverse(char *s, int len) {
    int i, j;
    for (i = 0, j = len - 1; i < j; i++, j--) {
        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }
}

char *strrev(char *s) {
    int len = strlen(s);
    reverse(s, len);
    return s;
}
