#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"
#include "functii.c"

int main()
{
    FILE *f;
    FILE *g;
    FILE *fp;
    f = fopen("studenti.txt", "r");
    if (f == NULL)
    {
        printf("Nu putem deschide fisierul");
        exit(1);
    }

    g = fopen("promovati.txt", "w");
    if (g == NULL)
    {
        printf("Nu putem deschide fisierul");
        exit(1);
    }

    fp = fopen("studenti_sortati.txt", "w");
    if (fp == NULL)
    {
        printf("Nu putem deschide fisierul");
        exit(1);
    }

    Node *head = NULL;
    Data v;
    Data1 v1;
    char *c, *t, *s, *u;
    c = malloc(50);
    int i, n, m;
    s = malloc(50);
    t = malloc(50);
    u = malloc(50);

    while (!feof(f))
    {
        fgets(c, 40, f);
        strcpy(s, c);
        strtok(s, ",");
        m = strlen(s);
        n = strlen(c);
        for (i = 0; i < m + 1; i++)
            sterge(c, 0, &n);

        strcpy(t, c);
        strtok(t, ",");
        strcat(s, " ");
        strcat(s, t);

        m = strlen(t);
        for (i = 0; i < m + 1; i++)
            sterge(c, 0, &n);

        strcpy(t, c);
        strtok(t, ",");
        m = strlen(t);
        for (i = 0; i < m + 1; i++)
            sterge(c, 0, &n);
        int a = atoi(t);

        strcpy(t, c);
        strtok(t, ",");
        m = strlen(t);
        for (i = 0; i < m + 1; i++)
            sterge(c, 0, &n);
        strcpy(u,t);

        strncpy(t, c, n);
        strtok(t, ",");
        m = strlen(t);
        for (i = 0; i < m + 1; i++)
            sterge(c, 0, &n);
        int b = atoi(t);

        if (strcmp(v.nume, s) != 0)
        {
            strcpy(v.nume, s);
            v.clasa = a;
            addAtBeginning(&head, v);
            strcpy(v1.materie,u);
            v1.nota=b;
            addAtBeginning1(&head->val.v,v1);
        }
        else {
            strcpy(v1.materie,u);
            v1.nota=b;
            addAtBeginning1(&head->val.v,v1);
        }
        strcpy(v.nume, s);
    }

    printf("\n Lista cu studenti");
    print(head);
    printf("\n");
    Node1 *head1=NULL;
    copylist(head,&head1);

    fclose(f);
    return 0;
}