#include <stdio.h>

int main () {
    enum SNOOKER
    {RED=1, YELLOW, GRWN, BLUE, PINK, BLACK};

    int total;

    printf("\nI potted a red worth %d\n", RED);
    printf("Then a black worth %d\n", BLACK);
    printf("Followed by another red worth %d\n", RED);
    printf("And finally a blue worth %d\n", BLUE);

    total = RED + BLACK + RED + BLUE;

    printf("\nAll together I scored %d\n", total);

    return 0;
}
