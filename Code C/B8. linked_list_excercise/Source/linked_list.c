/*
* File: linked_list.c
* Author: Trieu Anh Khoa
* Date: 08/07/2023
* Description: File contain some basic operation of linked list
*/

#include "C:\Users\Admin\C++\B8. linked_list_excercise\Header\linked_list.h"

node *createNode(int value){
    node *ptr = (node*)malloc(sizeof(node));
    ptr->value = value;
    ptr->next = NULL;
    return ptr;
}

void push_back(node** array, int value){
    node *temp, *p;
    temp = createNode(value);
    
    p = *array;          

    if (*array == NULL){
        *array = temp;
    }
    else{      
        while (p->next != NULL){
            p = p->next;     
        }
        p->next = temp;     
    }
}

void push_front(node **array, int value){
    node *temp;
    temp = createNode(value); 
    if (*array == NULL){
        *array = temp;
    }
    else{                       
        temp->next = *array;
        *array = temp;       
    }
    
}

void pop_back(node **array){
    node *p, *temp;
    p = *array;
    int i = 0; // to 
    while (p->next != NULL){
        p = p->next;
        i++;
    }
    free(p);
    temp = *array;
    int j;
    for ( j = 0; j < i - 1 ; j++){
        temp = temp->next;
    }
    temp->next = NULL;
}

void pop_front(node **array){ // Change array to store address of the second node and free the first node
    node *p;
    p = *array;
    *array = p->next;
    free(p);
}

void insert(node **array, int value, int pos){
    node *temp, *p;
    temp = createNode(value);   // create a new node
    p = *array;
    int i = 1;      
    if (pos == 0){ 
        temp->next = *array;                   
        *array = temp;       
    }
    while (p->next != NULL && pos != i){   
        p = p->next;
        i++;
    }
    temp->next = p->next;   
    p->next = temp;         
}

int front(node **array){
    node *p = *array;
    return p->value;
}

int back(node **array){
    node *p;
    p = *array;
    while ( p->next != NULL){    
        p = p->next;
    }

    return p->value;
}

