#include <stdio.h>
int main(void) {
    int arr[5] = {1, 2, 3, 4, 5};
    int *first = &arr[0];
    printf("%d\n", *first);
    printf("%d\n", *(first++));
    printf("%d\n", *(++first));
    return 0;
}