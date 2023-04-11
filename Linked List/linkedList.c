#include <stdlib.h>
#include <stdio.h>

void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
void search();
void reverse();

struct node
{
    /* data */
    int info;
    struct node *next;
};

struct node *START = NULL;

int main()
{
    int choice;
    while (1)
    {
        printf("\n--------- MENU ----------\n");
        printf("\n 1. Create \n");
        printf("\n 2. Display \n");
        printf("\n 3. Insert at the beggining \n");
        printf("\n 4. Insert at the end \n");
        printf("\n 5. Insert at a specified position \n");
        printf("\n 6. Delete from the beggining \n");
        printf("\n 7. Delete from the end \n");
        printf("\n 8. Delete from a specified position \n");
        printf("\n 9. Search an Element \n");
        printf("\n 10. Reverse the List \n");
        printf("\n 11. Exit \n");
        printf("\n-------------------------\n");

        printf("\n Enter your choice :\t");

        scanf("%d", &choice);
        switch (choice)
        {

        case 1:
            /* code */
            create();
            break;

        case 2:
            /* code */
            display();
            break;

        case 3:
            /* code */
            insert_begin();
            break;

        case 4:
            /* code */
            insert_end();
            break;

        case 5:
            /* code */
            insert_pos();
            break;

        case 6:
            /* code */
            delete_begin();
            break;

        case 7:
            /* code */
            delete_end();
            break;

        case 8:
            /* code */
            delete_pos();
            break;

        case 9:
            /* code */
            search();
            break;

        case 10:
            /* code */
            reverse();
            break;

        case 11:
            /* code */
            exit(0);
            break;

        default:
            printf("\n Wrong choice... \n");
            break;
        }
    }
    return 0;
}

void create()
{
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));

    if (temp == NULL)
    {
        printf("\n Out of Memory Space... \n");
        exit(0);
    }

    printf("\n Enter the Value : \t");
    scanf("%d", &temp->info);
    temp->next = NULL;

    if (START == NULL)
    {
        START = temp;
    }

    else
    {
        ptr = START;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

void display()
{
    struct node *ptr;
    if (START == NULL)
    {
        printf("\n List is Empty... \n");
        return;
    }

    else
    {
        ptr = START;
        printf("\n Elements of the List are : \n");
        while (ptr != NULL)
        {
            printf("\n %d \n", ptr->info);
            ptr = ptr->next;
        }
    }
}

void insert_begin()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    if (temp == NULL)
    {
        printf("\n Out of Memory Space... \n");
        return;
    }

    printf("\n Enter the value for the node : \t");
    scanf("%d", &temp->info);
    temp->next = NULL;

    if (START == NULL)
    {
        START = temp;
    }

    else
    {
        temp->next = START;
        START = temp;
    }
}

void insert_end()
{
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("\n Out of Memory Space... \n");
        return;
    }

    printf("\n Enter the value for the node : \t");
    scanf("%d", &temp->info);
    temp->next = NULL;

    if (START == NULL)
    {
        START = temp;
    }

    else
    {
        ptr = START;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

void insert_pos()
{
    struct node *temp, *ptr;
    int i, pos;

    temp = (struct node *)malloc(sizeof(struct node));

    if (temp == NULL)
    {
        printf("\n Out of Memory Space... \n");
        return;
    }

    printf("\n Enter the position for the new node to be inserted : \t");
    scanf("%d", &pos);
    printf("\n Enter the value for the node : \t");
    scanf("%d", &temp->info);
    temp->next = NULL;

    if (pos == 0)
    {
        temp->next = START;
        START = temp;
    }

    else
    {
        for (i = 0, ptr = START; i < pos - 1; i++)
        {
            ptr = ptr->next;
            if (ptr == NULL)
            {
                printf("\n Position not found... \n");
                return;
            }
        }
        temp->next = ptr->next;
        ptr->next = temp;
    }
}

void delete_begin()
{
    struct node *ptr;
    if (ptr == NULL)
    {
        printf("\n List is Empty... \n");
    }

    else
    {
        ptr = START;
        START = START->next;
        printf("\n The deleted element is %d : \n", ptr->info);
        free(ptr);
    }
}

void delete_end()
{
    struct node *temp, *ptr;
    if (START == NULL)
    {
        printf("\n List is Empty \n");
        exit(0);
    }

    else if (START->next == NULL)
    {
        ptr = START;
        START = NULL;
        printf("\n The deleted element is : %d \n", ptr->info);
        free(ptr);
    }

    else
    {
        ptr = START;
        while (ptr->next != NULL)
        {
            temp = ptr;
            ptr = ptr->next;
        }
        temp->next = NULL;
        printf("\n The deleted element is : %d \n", ptr->next);
        free(ptr);
    }
}

void delete_pos()
{
    int i, pos;
    struct node *temp, *ptr;
    if (START == NULL)
    {
        printf("\n The list is empty... \n");
        exit(0);
    }

    else
    {
        printf("\n Enter the position of the node to be deleted : \t");
        scanf("%d", &pos);
        if (pos == 0)
        {
            ptr = START;
            START = START->next;
            printf("\n The deleted element is : %d \n", ptr->info);
            free(ptr);
        }

        else
        {
            ptr = START;
            for (i = 0; i < pos; i++)
            {
                temp = ptr;
                ptr = ptr->next;
                if (ptr == NULL)
                {
                    printf("\n Postion not found... \n");
                    return;
                }
            }
            temp->next = ptr->next;
            printf("\n The deleted element is : %d \n", ptr->info);
        }
    }
}

void search()
{
    struct node *ptr;
    int i = 0, item;

    if (START == NULL)
    {
        printf("\n List is Empty... \n");
    }

    printf("\n Enter the Element to be searched : \t");
    scanf("%d", &item);

    int flag = 0;

    ptr = START;
    while (ptr != NULL)
    {
        if (ptr->info == item)
        {
            printf("\n %d found at location %d \n", item, i + 1);
            flag = 0;
            break;
        }
        else
        {
            flag = 1;
        }

        i++;
        ptr = ptr->next;
    }
    if (flag == 1)
    {
        printf("\n Element not found... \n");
    }
}

void reverse()
{
    struct node *prev, *current, *next;
    if (START == NULL)
    {
        printf("\n List is Empty... \n");
        return;
    }

    prev = NULL;
    current = START;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    START = prev;
}