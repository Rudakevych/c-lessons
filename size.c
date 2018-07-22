#include <stdio.h>

int main() {
    int num = 1234567890;

    printf("Size of int datatype is %d bytes \n", sizeof(int));
    printf("Size of int variable is %d bytes \n", sizeof(num));

    printf("Size of an int array is %d bytes \n", sizeof(int[3]));

    struct {int core; char grade;} result;
    printf("Size of a structurre is %d bytes \n", sizeof(result));

    return 0;
}