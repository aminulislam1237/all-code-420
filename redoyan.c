#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node {
    char data;
    Node *next;
};

int main() {
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    Node *fourth = NULL;
    Node *fifth = NULL;

    head = (Node*)malloc(sizeof(Node));
    second = (Node*)malloc(sizeof(Node));
    third = (Node*) malloc(sizeof(Node));
    fourth = (Node *) malloc(sizeof(Node));
    fifth = (Node *) malloc(sizeof(Node));

    head->data = 'A';
    head->next = second;

    second->data = 'B';
    second->next = third;

    third->data = 'C';
    third->next = fourth;

    fourth->data = 'D';
    fourth->next = fifth;

    fifth->data = 'E';
    fifth->next = NULL;

    printf("%c\n", head->data);
    printf("%c\n", second->data);
    printf("%c\n", third->data);
    printf("%c\n", fourth->data);
    printf("%c\n", fifth->data);

    return 0;
}
