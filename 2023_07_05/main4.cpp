#include <stdio.h>
#define LEN_INPUT 10

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);
    for (int i = 0; s1[i] != NULL; i++) {
        if ('a' <= s1[i]) printf("%c", s1[i] - 'a' + 'A');
        else printf("%c", s1[i] + 'a' - 'A');
    }
    return 0;
}