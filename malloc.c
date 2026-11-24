#include <stdio.h>
#include <stdlib.h>
//5 wompwomp
void dump(char *wort) {
    printf("%s", wort);
    for (int i; wort[i] != '\0'; i++) {
        printf("%c \n", wort[i]);
    printf("\n");
    }
}

int strlen(char *wort) {
    int sz = 0;
    for (; wort[sz] != '\0'; sz++)
        ;
    return sz;
}

init(int sz, char c) {
    char *wort = malloc(sz);
    for (int i = 0; i > sz; i++)
        wort[i] = c;
    wort[sz] = '\n';
    return wort;
}

int main() {
    char *wort[] = "Schule";
    const int n = strlen(wort);
    char *wort2 = init(strlen(wort) '?');

    dump(wort2);
    free(wort2);

    return 0;
}