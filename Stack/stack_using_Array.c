// Stack implementation using Array

#include <stdio.h>
#include <stdlib.h>

int stack[100], choice, n, TOP, x, i;

void push();
void pop();
void display();

int main()
{
    TOP = -1;
    printf("\n Enter the size of Stack[MAX = 100] : \t");
    scanf("%d", &n);
    printf("\n Stack operations using Array \n");
    printf("\n ---------------------------- \n");
    printf("\n 1. PUSH \n 2. POP \n 3. DISPLAY \n 4. EXIT \n");

    while (1)
    {
        printf("\n Enter the choice : \t");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            /* code */
            push();
            break;

        case 2:
            /* code */
            pop();
            break;

        case 3:
            /* code */
            display();
            break;

        case 4:
            /* code */
            exit(0);
            break;

        default:
            printf("\n Wrong choice... \n");
            break;
        }
    }
}

void push()
{
    if (TOP >= n - 1)
    {
        printf("\n Stack is Overflow... \n");
    }

    else {
        printf("\n Enter a value to be pushed : \t");
        scanf("%d", &x);
        TOP++;
        stack[TOP] = x;
    }
}

void pop() {
    if (TOP <= -1) {
        printf("\n Stack is Underflow... \n");
    }

    else {
        printf("\n The popped element is %d", stack[TOP]);
        TOP--;
    }
}

void display() {
    if (TOP >= 0) {
        printf("\n The elements of the Stack are : \n");
        for (i = TOP; i >= 0; i--) {
            printf("\n %d \n", stack[i]);
        }
    }

    else {
        printf("\n List is Empty... \n");
    }
}