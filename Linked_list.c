#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void ll_traversal(struct node *ptr)
{
    while(ptr != NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node * head;
    struct node * first;
    struct node * second;
    struct node * third;

    head=(struct node *) malloc(sizeof(struct node));
    first=(struct node *) malloc(sizeof(struct node));
    second=(struct node *) malloc(sizeof(struct node));
    third=(struct node *) malloc(sizeof(struct node));

    head->data=1;
    head->next=first;

    first->data=12;
    first->next=second;

    second->data=13;
    second->next=third;

    third->data=11;
    third->next=NULL;

    ll_traversal(head);
    
    return 0;
}