
#include <stdio.h>
#include "utils.h" // enter from what file should be info

void getnum();

/**
 * ????????
 * Process finished with exit code 11
 *
 * @return
 */
int main() {
    getnum();

    return 0;
}

void getnum() {
    int num;
    char again;

    printf("Enter an integer to be squared: ");
    scanf("%d", &num);

    printf("%d squared is %d\n", num, square(num));

    printf("Square another number? Y or N: ");
    scanf("%ls", &again);

    if((again == 'Y') || (again == 'y')) {
        getnum();
    } else {
        return;
    }
}


