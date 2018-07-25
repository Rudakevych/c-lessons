#include <stdio.h

void first();
int square5();
int cube5();

/**
 * Error
 *
 *
 * /home/vuhlyk/.local/share/JetBrains/Toolbox/apps/CLion/ch-1/181.5540.8/bin/cmake/bin/cmake --build /home/vuhlyk/CLionProjects/c-lessons/cmake-build-debug --target untitled -- -j 2
Scanning dependencies of target untitled
[ 50%] Building C object CMakeFiles/untitled.dir/first.c.o
/home/vuhlyk/CLionProjects/c-lessons/first.c:1:18: error: missing terminating > character
CMakeFiles/untitled.dir/build.make:62: recipe for target 'CMakeFiles/untitled.dir/first.c.o' failed
make[3]: *** [CMakeFiles/untitled.dir/first.c.o] Error 1
CMakeFiles/Makefile2:67: recipe for target 'CMakeFiles/untitled.dir/all' failed
make[2]: *** [CMakeFiles/untitled.dir/all] Error 2
CMakeFiles/Makefile2:79: recipe for target 'CMakeFiles/untitled.dir/rule' failed
make[1]: *** [CMakeFiles/untitled.dir/rule] Error 2
Makefile:118: recipe for target 'untitled' failed
make: *** [untitled] Error 2


 * @return
 */

int main () {
    int num;

    first();
    num = square5();
    printf("5x5= %d \n", num);
    printf("5x5x5= %d \n", cube5());

    return 0;
}

void first() {
    printf("Hello from the first function\n");
}

int square5(){
    int square = 5 * 5;
    return square;
}

int cube5() {
    int cube = (5 * 5) * 5;
    return cube;
}