#include <stdio.h>

int main() {
    int i, j;

    for (int i = 0; i < 4; ++i) {
        printf("Outer loop iteraction %d \n", i);
    }

    for (int j = 1; j < 4; ++j) {
        printf("Inner loop iteraction %d \n", j);
    }

    return 0;
}