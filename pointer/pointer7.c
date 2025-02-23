#include <stdio.h>
int main(void) {
    int a[5] = {4, 7, 2, 9, 8};
    int *start = a;
    int *end = &a[5];
    printf("%ld\n", end - start);
    return 0;
}