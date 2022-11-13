#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;

};


int main()
{
    struct node* head= NULL;
    struct node* second= NULL;
    struct node* third= NULL;


    head=(struct node*) malloc (sizeof(struct node));
    second=(struct node*) malloc (sizeof(struct node));
    third=(struct node*) malloc (sizeof(struct node));

    head->data=1;
    second->data=3;
    third->data=5;

    head->next =second;
    second->next= third;
    third-> next= NULL;
    printf("start = %d\n",head);
    printf("data in start =%d\n",head->data);
    printf("pointer in first node =%d\n",head->next);

    printf("start = %d\n",second);
    printf("data in start =%d\n",second->data);
    printf("pointer in first node =%d\n",second->next);

    printf("start = %d\n",third);
    printf("data in start =%d\n",third->data);
    printf("pointer in first node =%d\n",third->next);



    printf("[%d]-> [%d][%d]->[%d][%d]->[%d][%d] \n",head,head->data,head->next,second->data,second->next,third->data,third->next);
    return 0;
}
