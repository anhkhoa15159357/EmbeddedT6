#include <stdio.h>

#define sum(a,b) a+b

void display(){
    printf("Hello\n");
}

int main(int argc, char const *argv[])
{
    //Comment

    display();
    printf("Sum: %d\n", sum(10,7));
    return 0;
}
