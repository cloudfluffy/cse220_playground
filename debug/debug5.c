#include <stdio.h>
#include <stdlib.h>

#ifdef DEBUG
#define debug(msg) printf("DEBUG: %s", msg)
#endif

int main(int argc, char *argv[]) {
    debug("Debug flag was defined\n");
    printf("Hello, World!\n");
    return EXIT_SUCCESS;
}
