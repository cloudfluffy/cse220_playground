#include <stdio.h>
int main() {
    int x = 0x455343;
    // x is stored in little endian
    // +------+------+------+------+
    // | 0x43 | 0x53 | 0x45 | 0x00 |
    // +------+------+------+------+
    // 0x43 = 'C'
    // 0x53 = 'S'
    // 0x45 = 'E'
    // 0x00 = '\0'
    char* x_char_ptr = &x;
    printf("0x%0x\n", x);
    printf("%c = 0x%02x\n", *x_char_ptr, *x_char_ptr);
    printf("%c = 0x%02x\n", *(x_char_ptr + 1), *(x_char_ptr + 1));
    printf("%c = 0x%02x\n", *(x_char_ptr + 2), *(x_char_ptr + 2));
    printf("%c = 0x%02x\n", *(x_char_ptr + 3), *(x_char_ptr + 3));
    printf("\n");
    x_char_ptr[2] = 'S';
    // +------+------+------+------+
    // | 0x43 | 0x53 | 0x53 | 0x00 |
    // +------+------+------+------+
    // 0x43 = 'C'
    // 0x53 = 'S'
    // 0x45 = 'S'
    // 0x00 = '\0'
    printf("0x%0x\n", x);
    printf("%c = 0x%02x\n", *x_char_ptr, *x_char_ptr);
    printf("%c = 0x%02x\n", *(x_char_ptr + 1), *(x_char_ptr + 1));
    printf("%c = 0x%02x\n", *(x_char_ptr + 2), *(x_char_ptr + 2));
    printf("%c = 0x%02x\n", *(x_char_ptr + 3), *(x_char_ptr + 3));
    // A pointer is just a variable that holds a memory address.
    // We are responsible for keeping track of what lives at that address.
}