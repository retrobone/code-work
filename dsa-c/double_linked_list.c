//22.03.2025

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *prev, *next;
} DLList;

void main()
{
    DLList *start, *temp, *newnode;
    int ans, loc, val, i;
    start = NULL;
    do
    {
        printf("\n Double Linked List");
        printf("\n 1. Add node at beginning ");
        printf("\n 2. Add node at end");
        printf("\n 3. Add node at specific location");
        printf("\n 4. Add node before specified value");
        printf("\n 5. Add node after specific value");
        printf("\n 6. Delete from beginning");
        printf("\n 7. Delete from end");
        printf("\n 8. Delete from location");
        printf("\n 9. Delete before specified value");
        printf("\n 10. Delete after specific value");
        printf("\n 11. Sort linked list");
        printf("\n 12. Display");
        printf("\n 13. Reverse display");
        printf("\n 14. Exit");
        printf("\n What do you want to use :");
        scanf("%d", &ans);

        switch (ans)
        {
        case 1: // Add node at beginning
            newnode = (DLList *)malloc(sizeof(DLList));
            printf("\n Enter data :");
            scanf("%d", &newnode->data);
            newnode->prev = NULL;
            newnode->next = start;
            start = newnode;
            break;

        case 2: // Add node at end
            newnode = (DLList *)malloc(sizeof(DLList));
            printf("\n Enter data : ");
            scanf("%d", &newnode->data);
            newnode->next = NULL;
            if (start == NULL)
            {
                start = newnode;
            }
            else
                temp = start;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            newnode->prev = temp;
            temp->next = newnode;
            break;

        case 3: // Add node at specific loaction
            newnode = (DLList *)malloc(sizeof(DLList));
            printf("\n Enter data : ");
            scanf("%d", &newnode->data);
            printf("\n Where do you want to insert this : ");
            scanf("%d", &loc);
            temp = start;
            if (start == NULL)
            {
                start = newnode;
                start->prev = NULL;
                start->next = NULL;
            }
            else
            {
                for (i = 1; i < (loc - 1); i++)
                {
                    temp = temp->next;
                }
                newnode->next = temp->next;
                newnode->prev = temp;
                temp->next = newnode;
                temp->next->prev = newnode;
            }
            break;

        case 12:
            temp = start;
            while (temp != NULL)
            {
                printf("[%d]", temp->data);
                if (temp->next != NULL)
                {
                    printf("-->");
                }
                temp = temp->next;
            }
            break;
        }
    } while (ans < 15);
}
