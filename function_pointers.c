#include <stdio.h>

int Add(int a, int b) {
    return a + b;
}

void PrintHello() {
    printf("Hello\n");
}

void PrintHello2(char* name) {
    printf("Hello %s\n", name);
}

int main() {
    int c;
    int (*p)(int, int); // This is how we write a function pointer, notice parenthesis
    void (*ptr)();
    void (*ptr2)(char*);

    p = &Add;
    //p = Add; Just using the func name would do the same
    ptr = PrintHello;
    ptr2 = PrintHello2;

    c = (*p)(2, 3); // De-referencing and executing the function
    //c = p(2, 3) Just using the function pointer identifier also works
    ptr();
    ptr2("Diego");


    printf("%i\n", c);



    return 0;
}

