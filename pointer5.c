#include <stdio.h>
int main(void) {
    int a[5] = {4, 7, 2, 9, 8};
    int *p = a;
    printf("%d\n", *p);
    printf("%d\n", *(p + 1));
    return 0;
}