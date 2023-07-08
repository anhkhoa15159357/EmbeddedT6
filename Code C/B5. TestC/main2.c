#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

typedef enum{
    SMALLER,
    BIGGER,
    EQUAL,
}Compare;

Compare compareStrings(const char arr1[], const char arr2[]) {
    int i = 0;
    
    while (arr1[i] != '\0' || arr2[i] != '\0') {
        if (arr1[i] < arr2[i]) {
            printf ("SMALLER\n");
        } else if (arr1[i] > arr2[i]) {
            printf ("BIGGER\n");
        }
        i++;
        
    }
    
    printf ("EQUAL\n");
}

int main() {
    const char str1[] = "MBC";
    const char str2[] = "MNC";

    compareStrings(str1, str2);

    return 0;
}