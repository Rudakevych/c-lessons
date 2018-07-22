#include <stdio.h>

int main () {
    int x = 10, y = 5;

    printf("\nx = %d y = %d \n", x, y);

    x = x ^ y; // 1010 ^ 0101 = 1111 (or number 15)
    y = x ^ y; // 1111 ^ 0101 = 1010 (or number 10)
    x = x ^ y; // 1111 ^ 1010 = 0101 (or number 5)

    printf("\nx = %d y = %d \n", x, y);

    return 0;
}