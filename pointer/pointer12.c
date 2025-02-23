#include <stdio.h>
int main(void) {
    char blocks[3] = {'A', 'B', 'C'};
    char *ptr = &blocks[0];
    char temp;
    printf("%c\n", blocks[0]);
    printf("%c\n", *(blocks + 2));
    printf("%c\n", *(ptr + 1));
    printf("%c\n", *ptr);
    return 0;
}