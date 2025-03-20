//20.03.2025

#include <stdio.h>
#include <stdlib.h>

int stack[10];
int top = -1;
void push(int data);
int pop();
void peep();

void main()
{
    int choice, data;
    do
    {
        printf("\n \tStack Program - Written by Kevin B");
        printf("\n 1. Pop data");
        printf("\n 2. Push Data");
        printf("\n 3. Traverse/Peep Data");
        printf("\n 4. Exit");
        printf("\n Enter choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\n Enter data : ");
            scanf("%d", &data);
            push(data);
            break;

        case 2:
            data = pop();
            printf("\n Popped element = %d", data);
            break;

        case 3:
            peep();
            break;

        case 4:
            exit(0);
            break;
        }
    } while (choice < 5);
}

void push(int data)
{
    if (top == 9)
    {
        printf("\n Can't insert element in stack overflow");
    }
    else
    {
        top++;
        stack[top] = data;
    }
}

int pop()
{
    int data;
    if (top == -1)
    {
        printf("\n Empty stack");
    }
    else
    {
        data = stack[top];
        top--;
    }
    return data;
}

void peep()
{
    int i;
    for (i = 0; i <= top; i++)
    {
        printf("|%d| ", stack[i]);
    }
}
