// 27.2.2025, not fully completed

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void main()
{
    printf("\nWritten by Kevin B");
    struct node *start, *temp;
    start = NULL;
    int ans;
    do
    {
        printf("\n Linked List Menu");
        printf("\n 1. Add Node at the beginning");
        printf("\n 2. Add Node at the end");
        printf("\n 11. Display Linked List");
        printf("\n 12. Exit");
        printf("\nEnter choice from 1-12 : ");
        scanf("%d", &ans);

        switch (ans)
        {
        case 1:
            temp = (struct node *)malloc(sizeof(struct node));
            printf("\nEnter data : ");
            scanf("%d", &temp->data);
            temp->next = start;
            start = temp;
            break;

        case 11:
            temp = start;
            while (temp != NULL)
            {
                printf("|%d|-->", temp->data);
                temp = temp->next;
            }
            break;

        case 12:
            exit(ans);
            break;
        }
    } while (ans < 12);
}
