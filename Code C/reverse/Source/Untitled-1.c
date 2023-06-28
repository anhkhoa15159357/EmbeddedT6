/*
* File: string_reverse.c
* Author: Phan Hoang Trung
* Date: 28/06/2023
* Description: This is a file for reverse a string
*/


#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

/*
* Function: string_reverse
* Description: This function will print the string in reverse way
* Input:
*   arr - an array of char
*   length - an integer value - length of an array
* Output:
*   print arr in reverse
* Example:
* Input: 
* char arr[] = "This is fun and that so sad"
* Output:
* print: "sad so that and fun is This"
*/

void string_reverse(const char arr[], int length)
{
   /* method:
   * start arr from the last to the begin
   * if it's not ' ', then we count how many letter in that word
   * if it's ' ', then we assign it to the second array
   */ 
   
   int i,j = 0, count = 0;  // i is use for read data in array arr from the last, j is use for write data to array s2 from the begin, count is use to count how many letter in 1 word

   char* s2;                
   s2 = (char*)malloc(length * sizeof(char));   // allocated memory for s2 in the heap
   memset(s2, '0', length * sizeof(char));      // set all value in s2 to '0'

   for ( i = length; i >= 0; i--)
   {
     if (arr[i] == ' ')
     {
        for (int a = i + 1; a <= i + count; a++)
        {
            s2[j] = arr[a];
            j++;
        }
        s2[j] = ' ';
        j++;
        count = 0; // after assign that word to second array, reset it
     }
     else
     {
        count++; // count how many letter in that word
     }
   } 
   /*
   * print the data in array s2
   */
   for (int ab = 0; ab < length; ab++)
   {
    printf("%c",s2[ab]);
   }

   free(s2); // deallocated memory s2 using
}


int main()
{
    char arr[] = " This is the first and that are the second ";
    int length = strlen(arr);
    string_reverse(arr,length);
    printf("String: %s",arr);
    return 0;
}