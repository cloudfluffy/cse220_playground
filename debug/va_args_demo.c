#include <stdio.h>

#define string(...) #__VA_ARGS__

#define bad_my_print(format, ...) printf("This is bad_my_print speaking: " format, __VA_ARGS__)

#define good_my_print(format, ...) printf("This is good_my_print speaking: " format, ##__VA_ARGS__)

int main(void) {
    printf(string(argument1, argument2, argument3, and so on, \n));

    int num1 = 9, num2 = 7;

    bad_my_print("Did you know that %d times %d equals %d?\n", num1, num2, num1 * num2);

    good_my_print("Did you know that %d add %d equals %d?\n", num1, num2, num1 + num2);

    // bad_my_print("I didn't put in any additional arguments!\n");

    good_my_print("I didn't put in any additional arguments!\n");

    return 0;
}
