#include <stdio.h>
#include <string.h>
int main(void) {
    char *a = "Hello World";
    int len = strlen(a);
    a += strlen(a) - 1;
    for (int i = 0; i < len; i++) {
        printf("%c", *a);
        a--;
    }
    printf("\n");
    return 0;
}