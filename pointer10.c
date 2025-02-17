#include <stdio.h>
int main(void) {
    int a[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0};
    int *ptr = &a[5];
    printf("%ld\n", sizeof(int));
    while (*ptr != 0)
        printf("addr=%p, %d\n", ptr, *ptr--);
}