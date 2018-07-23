#include <stdio.h>

int main() {
    int i, j;
    int flag = 1;

    /**
    // goto
    for (int i = 1; i < 4; ++i) {
        for (int j = 1; j < 4; ++j) {
            if(i == 2 && j == 1) {
            goto end; // goto jump from here
            }
            printf("Running i=%d\n", i, j);
        }
    }end: // goto jump to here
*/

    // boolean flag (logical flag)
    for (int i = 1; i < 4; ++i) {
        if (flag)
        if(i == 2 && j == 1) {
            flag = 0;
        }
        for (int j = 1; j < 4; ++j) {
            if (flag)
            if(i == 2 && j == 1) {
                goto end; // goto jump from here
            }
            printf("Running i=%d j=%d \n", i, j);
        }
    }end: // goto jump to here

    return 0;
}