#include <stdio.h>
#include <limits.h>

int main() {
    printf("short int... \tsize: %d bytes %d byte \n", sizeof(short int));
    printf("from %d to %d", SHRT_MAX, SHRT_MIN);
    printf("\n");

    printf("long int... \tsize: %d bytes %d byte \n", sizeof(long int));
    printf("from %d to %d", LONG_MAX, LONG_MIN);
    printf("\n");

    printf("char... \tsize: %d bytes %d byte \n", sizeof(char));

    printf("float... \tsize: %d bytes %d byte \n", sizeof(float));

    printf("double... \tsize: %d bytes %d byte \n", sizeof(double));

    return 0;
}

