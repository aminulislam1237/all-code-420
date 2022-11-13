#include<stdio.h>
#include<stdlib.h>
struct Node {
char ch;
struct Node* next;
};


int main()
{
struct Node* head = NULL;
struct Node* second = NULL;
struct Node* third = NULL;
struct Node* fourth = NULL;
struct Node* fifth = NULL;

head = (struct Node*)malloc(sizeof(struct Node));
second = (struct Node*)malloc(sizeof(struct Node));
third = (struct Node*)malloc(sizeof(struct Node));
fourth = (struct Node*)malloc(sizeof(struct Node));
fifth = (struct Node*)malloc(sizeof(struct Node));

head->ch = 'A';
head->next = second;
second->ch = 'B';
second->next = third;
third->ch = 'C';
third->next = fourth;
fourth->ch = 'D';
fourth->next = fifth;
fifth->ch = 'E';
fifth->next = NULL;

printf("Start = %d\n",head);
printf("Data in Start = %c\n",head->ch);
printf("Pointer in first Node = %d\n",head->next);
printf("Second = %c\n",second);
printf("Data in Second Node = %c\n",second->ch);
printf("Pointer in Second Node = %d\n",second->next);
printf("Third = %c\n",third);
printf("Data in Third Node = %c\n",third->ch);
printf("Pointer in Third Node = %d\n",third->next);
printf("Third = %c\n",fourth);
printf("Data in Third Node = %c\n",fourth->ch);
printf("Pointer in Third Node = %d\n",fourth->next);
printf("Third = %c\n",fifth);
printf("Data in Third Node = %c\n",fifth->ch);
printf("Pointer in Third Node = %d\n",fifth->next);


printf("[%d] [%c][%d] [%c][%d] [%c][%d] [%c][%d] [%c][%d]",head,head->ch,head->next,second->ch,second->next,third->ch,
       third->next,fourth->ch,fourth->next,fifth->ch,fifth->next);


return 0;
}
