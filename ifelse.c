#include <stdio.h>

int main () {
    if(5 > 1) {
        printf("Yes, 5 is greater than 1\n");
    }

    if(5 > 1) {
        if(5 > 1) {
            printf("Yes, 5 is greater than 1 and 7 is greater than 1\n");
        }
    }

    if(5 < 1) {
        printf("1st Expression is true\n");
    } else if (1 > 3) {
        printf("1st Expression is true\n");
    } else  {
        printf("Both expressions is false \n");
    }

    return 0;
}