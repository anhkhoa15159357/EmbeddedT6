#ifndef REVERSE_H
#define REVERSE_H
#include <stdio.h>
#include <string.h>

void reverseWords(char str[]) {
    int length = strlen(str);
    int start, end;

    // Reverse the entire string
    for (start = 0, end = length - 1; start < end; start++, end--) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
    }

    // Reverse individual words
    start = 0;
    while (start < length) {
        // Find the start of a word
        while (start < length && str[start] == ' ') {
            start++;
        }

        // Find the end of the word
        end = start;
        while (end < length && str[end] != ' ') {
            end++;
        }

        // Reverse the word
        int wordStart = start;
        int wordEnd = end - 1;
        while (wordStart < wordEnd) {
            char temp = str[wordStart];
            str[wordStart] = str[wordEnd];
            str[wordEnd] = temp;
            wordStart++;
            wordEnd--;
        }

        start = end;
    }
}



#endif
