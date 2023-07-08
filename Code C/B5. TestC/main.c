#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>



bool isEqual(const char arr[], const char arr2[]){
   uint8_t i = 0;

    while (arr[i] != '\0' || arr2[i] != '\0') {
        if (arr[i] != arr2[i]) {
            return false;
        }
        i++;
    }

    return true;
}



int main (int argc, char const *arvg[])
{
    char arr1[]="Hello"; char arr2[]="This is test";
     if (isEqual(arr1 , arr2)) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
     }
     return 0;
}