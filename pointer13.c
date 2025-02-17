#include <stdio.h>
int main(void) {
    char blocks[3] = {'A', '1', '5'};
    char *ptr = &blocks[0];
    char temp;
    ptr = blocks + 1;
    printf("%c\n", temp = *ptr);
    printf("%c\n", temp = *(ptr + 1));
    ptr = blocks;
    printf("%c\n", temp = *++ptr);
    printf("%c\n", temp = ++*ptr);
    printf("%c\n", temp = *ptr++);
    printf("%c\n", temp = *ptr);
    return 0;
}