#include <stdio.h>
#include "test.c"

#define MAX 17
#define SUM(a,b) a+b
#define CREATE_FUNC(name_func, cmd)\
void name_func()                    \
{                                   \
    printf("%s\n", (char *)cmd);       \
}

CREATE_FUNC(say,"Try my best");

void display(){
    printf("Hi everyone\n");
}

int main(int argc, char const *argv[])
{
    say();
    display();
    printf("MAX: %d\n", MAX);
    printf("Sum: %d\n", SUM(10,7));
    test();
    return 0;
}
