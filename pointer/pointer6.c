#include <stdio.h>
int main(void) {
    char str[] = "test";
    char *p = str;
    while (*p) {
        printf("%c", *p++);
    }
    printf("\n");
    return 0;
}