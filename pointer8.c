#include <stdio.h>
int main(void) {
    char str[] = "test string";
    char *start = str, *end = str;
    while (*end) {
        end++;
    }
    printf("%ld\n", end - start);
    return 0;
}