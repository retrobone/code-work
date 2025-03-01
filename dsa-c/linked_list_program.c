// 1.3.2025, not fully completed

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
    struct node *start, *temp, *ptr;
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
            temp = (struct node *)malloc(sizeof(struct node)); // Allocating memory
            printf("\nEnter data : ");
            scanf("%d", &temp->data);
            temp->next = start;
            start = temp;
            break;

        case 2:
            temp = (struct node *)malloc(sizeof(struct node)); // Allocating memory
            printf("\nEnter data : ");
            scanf("%d", &temp->data);
            temp->next = NULL;
            if (start == NULL)
            {
                start = temp;
            }
            else
            {
                ptr = start;
                while (ptr->next != NULL)
                {
                    ptr = ptr->next;
                }
                ptr->next = temp;
            }
            break;

        case 11:
            temp = start;
            while (temp != NULL)
            {
                printf("[%d|%d]", temp->data, temp->next); // Prints linked list with data and address of next next node
                if (temp->next != NULL)
                {
                    printf("-->");
                }
                temp = temp->next;
            }
            break;

        case 12:
            exit(0);
            break;
        }
    } while (ans < 12);
}
