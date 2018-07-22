#include <stdio.h>

#define LINE "_____________"
#define TITLE "C programming in easy steps"
#define AUTHOR "Mike McGrath"

#ifdef _WIN32
#define SYSTEM "Windows"
#endif

#ifdef linux
#define SYSTEM "LINUX"
#endif

int main () {
    printf("\n \t %s \n \t %s \n", LINE, TITLE);
    printf("\t by %s \n \t %s \n", AUTHOR, LINE);
    printf("\n Operating System: %s \n", SYSTEM);

    // use command in terminal
    // cpp -dN define
    // to see all defined constants

    return 0;
}