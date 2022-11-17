#include<stdio.h>
#include<stdlib.h>


struct Node{
    int data;
    struct Node* next;
};

void showData(struct Node* head){
    printf("%d ",head->data);
    printf("%d ",head->next->data);
    printf("%d ",head->next->next->data);
    printf("%d ",head->next->next->next->data);

}

void main(){

    struct Node* head   = NULL;
    struct Node* second = NULL;
    struct Node* third  = NULL;
    struct Node* forth  = NULL;

    head   = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third  = (struct Node*)malloc(sizeof(struct Node));
    forth  = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = forth;

    forth->data = 4;
    forth->next = NULL;

    showData(head);

}
