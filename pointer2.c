#include <stdio.h>
int main(void) {
    int before[2] = {3, 4};
    int arr[2] = {1, 2};
    printf("%d\n", arr[-1]);
    printf("%d\n", *((&arr[0]) - 1));
    return 0;
}