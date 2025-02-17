#include <stdio.h>
void modifyVariable(int *var) {
    *var = 10;
}
int main(void) {
    int num = 5;
    modifyVariable(&num);
    printf("%d\n", num);
    return 0;
}