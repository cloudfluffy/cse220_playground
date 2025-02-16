#include <stdio.h>
#include <stdlib.h>

#define debug(msg) printf("DEBUG: %s", msg)

int main(int argc, char *argv[]) {
#ifdef DEBUG
    debug("Debug flag was defined\n");
    printf("DEBUG: %d\n", DEBUG);
#endif
    printf("Hello, World!\n");
    return EXIT_SUCCESS;
}
