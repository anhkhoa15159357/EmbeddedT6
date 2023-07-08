#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next;
} node;

node* createNode(intValue){
    node *ptr = (node*)malloc(sizeof(node));
    ptr->value = value;
    ptr->next = NULL;
    return ptr;
}

void push_back(node **array, int value){
    node *temp, *p;
    temp = createNode(value);
    if(*array = NULL){
        *array = temp;   //Neu linked list dang trong thi Node temp la head
    }
    else{
        p = *array; // Khoi tao con tro
        while(p->next != NULL){
            p = p->next; //Duyet danh sach lien ket den cuoi. Node cuoi co next laf NULL
        }
        p->next = temp; //Gan next cua thang cuoi bang temp. Khi do temp se la thang cuoi (temp next= NULL)
    }

    int main(int argc, char const *argv[]){
        node *array = NULL; //0xc1

        push_back(&array, 7);

        push_back(&array, 4);

        push_back(&array, 8);

        return 0;
    }
}