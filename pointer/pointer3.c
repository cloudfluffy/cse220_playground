#include <stdio.h>
int main(int argc, char *argv[]) {
    int arr1[3] = {1, 2, 3};
    printf("%s\n", arr1 == &arr1[0] ? "true" : "false");
    printf("%s\n", arr1[0] == *(arr1 + 0) ? "true" : "false");
    int arr2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("%s\n", arr2[1][2] == *(arr2[1] + 2) ? "true" : "false");
    printf("%s\n", arr2[1][2] == *(*(arr2 + 1) + 2) ? "true" : "false");
    return 0;
}