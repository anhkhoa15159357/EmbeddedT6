/*
* File: linked_list.h
* Author: Trieu Anh Khoa
* Date: 08/07/2023
* Description: File contain function in preprocessor for linked_list.c
*/

#ifndef LINKED_LIST
#define LINKED_LIST

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
typedef struct node
{
    int value;
    struct node *next;
}node ;

node *createNode(int value);
void push_back(node** array, int value);
void push_front(node **array, int value);
void pop_back(node **array);
void pop_front(node **array);
void insert(node **array, int value, int pos);
int front(node **array);
int back(node **array);

#endif