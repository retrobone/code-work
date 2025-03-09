// 27.2.2025, not fully completed
// 09.03.2025, 95% completed

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
    struct node *start, *newnode, *temp, *pretemp, *pretemp2;
    start = NULL;
    int ans, loc, i, val;
    do
    {
        printf("\n Linked List Menu");
        printf("\n 1. Add Node at the beginning");
        printf("\n 2. Add Node at the end");
        printf("\n 3. Add Node at specific location");
        printf("\n 4. Add Node after specific value");
        printf("\n 5. Add Node before specific value");
        printf("\n 6. Delete from beginning");
        printf("\n 7. Delete from end");
        printf("\n 8. Delete after a specific value");
        printf("\n 9. Delete before a specific value");
        printf("\n 10. Delete specific value : ");
        printf("\n 11. Sort array");
        printf("\n 12. Display Linked List");
        printf("\n 13. Exit");
        printf("\nEnter choice from 1-13 : ");
        scanf("%d", &ans);

        switch (ans)
        {
        case 1:
            newnode = (struct node *)malloc(sizeof(struct node)); // Allocating memory
            printf("\nEnter data : ");
            scanf("%d", &newnode->data);
            newnode->next = start;
            start = newnode;
            break;

        case 2:
            newnode = (struct node *)malloc(sizeof(struct node)); // Allocating memory
            printf("\nEnter data : ");
            scanf("%d", &newnode->data);
            newnode->next = NULL;
            if (start == NULL)
            {
                start = newnode;
            }
            else
            {
                temp = start;
                while (temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = newnode;
            }
            break;

        case 3:
            newnode = (struct node *)malloc(sizeof(struct node)); // Allocating memory
            printf("\n Enter data : ");
            scanf("%d", &newnode->data);
            newnode->next = NULL;
            printf("\n Enter location : ");
            scanf("%d", &loc);
            temp = start;
            if (start == NULL)
            {
                start = newnode;
            }
            else
            {
                {
                    for (i = 1; i < (loc - 1); i++)
                    {
                        temp = temp->next;
                    }
                    newnode->next = temp->next;
                    temp->next = newnode;
                }
            }
            break;

        case 4:
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("\n Enter data : ");
            scanf("%d", &newnode->data);
            printf("\n Enter value to enter after : ");
            scanf("%d", &val);
            temp = start;
            while (temp->data != val)
            {
                temp = temp->next;
            }
            newnode->next = temp->next;
            temp->next = newnode;
            break;

        case 5:
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("\n Enter data : ");
            scanf("%d", &newnode->data);
            printf("\n Enter value to enter before : ");
            scanf("%d", &val);
            temp = start;
            while (temp->data != val)
            {
                pretemp = temp;
                temp = temp->next;
            }
            newnode->next = temp;
            pretemp->next = newnode;
            break;

        case 6:
            start = start->next;
            break;

        case 7:
            temp = start;
            while (temp->next != NULL)
            {
                pretemp = temp;
                temp = temp->next;
            }
            pretemp->next = NULL;
            break;

        case 8:
            printf("\n After which value do you want to delete an element : ");
            scanf("%d", &val);
            temp = start;
            while (temp->data != val)
            {
                temp = temp->next;
            }
            pretemp = temp->next;
            temp->next = pretemp->next;
            break;

        case 9:
            printf("\n Before which value do you want to delete an element : ");
            scanf("%d", &val);
            temp = start;
            while (temp->data != val)
            {
                pretemp2 = pretemp;
                pretemp = temp;
                temp = temp->next;
            }
            pretemp2->next = pretemp->next;
            break;

        case 10:
            printf("\n Which value do you want to delete : ");
            scanf("%d", &val);
            temp = start;
            while (temp->data != val)
            {
                pretemp = temp;
                temp = temp->next;
            }
            pretemp->next = temp->next;
            break;

        case 11:
            temp = start;
            while (temp != NULL)
            {
                printf("[%d]", temp->data); // Prints linked list with data and address of next next node
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
    } while (ans < 14);
}
