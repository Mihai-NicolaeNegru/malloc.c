#include <stdio.h>
#include <stdlib.h>
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

int cheque(char* wort1, char* wort2, char c) {
for (int i; wort1[i] != '\0'; i++) {
    if (wort1[i] == c) {
        wort2[i] = c;
        }
    }
    return 0;
}

init(int sz, char c) {
    char *wort = malloc(sizeof(char)*sz +1);
    for (int i = 0; i < sz; i++) {
        wort[i] = c;
    }
    wort[sz] = '\0';
    return wort;
}

int main() {
    char *wort = "WORT";
    char *wort2 = init(strlen(wort), '?');
    dump(wort2)
    cheque(wort1, wort2, O)
    dump(wort2);
    free(wort2);

    return 0;
}

