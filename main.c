#include <stdio.h>

/* main.c */
int main(int argc, char *argv[]) {
    printf("Hello World\n");

    // test out pointers
    int i = 5;
    int* p = &i;
    printf("Value of i is: %d\n", i);
    printf("Address of i is: %p\n", &i);
    printf("Value at address %p is: %d \n", p, *p);

    i = 6;
    printf("\nChanging i to 6\n");
    printf("Value of i is: %d\n", i);
    printf("Address of i is: %p\n", &i);
    printf("Value at address %p is: %d\n", p, *p);


}

// need to install code runner extension?
// https://www.freecodecamp.org/news/how-to-write-and-run-c-cpp-code-on-visual-studio-code/