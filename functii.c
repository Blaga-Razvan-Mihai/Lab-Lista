#include <stdio.h>
#include <string.h>
#include "lista.h"

void addAtBeginning(Node **head, Data v)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    strcpy(newNode->val.nume,v.nume);
    newNode->val.clasa=v.clasa;
    newNode->next = *head;
    newNode->prev = NULL;
    if ((*head) != NULL)
        (*head)->prev = newNode;
    *head = newNode;
}

void addAtBeginning1(Node1 **head, Data1 v)
{
    Node1 *newNode = (Node1 *)malloc(sizeof(Node1));
    strcpy(newNode->val1.materie,v.materie);
    newNode->val1.nota=v.nota;
    newNode->next = *head;
    *head = newNode;
}

void print1(Node1 *head)
{
    Node1 *headcopy = head;
    while (headcopy != NULL)
    {
        printf("\n %s %d", headcopy->val1.materie, headcopy->val1.nota);
        headcopy = headcopy->next;
    }
}

void print(Node *head)
{
    Node *headcopy = head;
    while (headcopy != NULL)
    {
        printf("\n %s in clasa %d ", headcopy->val.nume, headcopy->val.clasa);
        headcopy = headcopy->next;
    }
}

void copylist(Node *head, Node **head1){
    Node *headcopy=head; 
    Data v;
    while(headcopy!=NULL){
        strcpy(v.nume,headcopy->val.nume);
        v.clasa=headcopy->val.clasa;
        addAtBeginning(&head1,v);
        headcopy=headcopy->next;
    }
}



void deleteV(Node **head, Data val){
    if(*head==NULL)   return;
    Node *headcopy=*head;
    if(strcmp(headcopy->val.nume,val.nume==0)){
        *head=(*head)->next;
        if((*head)!=NULL)    (*head)->prev=NULL;
        free(headcopy);
        return;
    }
    while(headcopy->next!=NULL){
        if(strcmp(headcopy->val.nume,val.nume==0))   headcopy=headcopy->next;
        else {
            if(headcopy->next!=NULL)    (headcopy->next)->prev=headcopy->prev;
            if(headcopy->prev!=NULL)    (headcopy->prev)->next=headcopy->next;
            free(headcopy);
            return;
    }
}
}


void sterge(char *c, int pos, int *n)
{
    for (int i = pos; i < (*n) - 1; i++)
        c[i] = c[i + 1];
    (*n)--;
}
