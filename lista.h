#ifndef LISTA_H
#define LISTA_H


typedef struct Student1{
    char materie[20];
    int nota;
}Data1;

typedef struct Elem1{
    Data1 val1;
    struct Elem1 *next;
}Node1;


typedef struct Student{
    char nume[40];
    int clasa;
    Node1 v;
}Data;

typedef struct Elem{
    Data val;
    struct Elem *next, *prev;
}Node;


void addAtBeginning(Node **head, Data v);

void addAtBeginning1(Node1 **head,Data1 v);

void print1(Node1 *head);

void print(Node* head);

void copylist(Node *head, Node *head1);

void deleteV(Node **head, Data val);

void sterge(char *c, int pos, int *n);

#endif