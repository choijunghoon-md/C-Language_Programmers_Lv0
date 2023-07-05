#include <stdio.h>

#define LEN_INPUT 1000001

int main(void) {
    char s1[LEN_INPUT];

    scanf("%s", s1);

    int i = 0;
    while (s1[i] != NULL) {
        printf("%c", s1[i]);
        i++;
    }

    return 0;
}