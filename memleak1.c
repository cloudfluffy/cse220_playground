#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int *var = malloc(sizeof(int));
    // Assign a value
    *var = 4;
    // Print the value
    printf("The value of var is: %d\n", *var);
    return EXIT_SUCCESS;
}
