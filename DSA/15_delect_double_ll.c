#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next, *prev;
};

struct node *create_double_ll()
{
    struct node *p, *q, *start = NULL;
    int n, data, i;
    printf("Enter the number of nodes :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            start = (struct node *)malloc(sizeof(struct node));
            p = start;
            p->prev = NULL;
        }
        else
        {
            p->next = (struct node *)malloc(sizeof(struct node));
            q = p->next;
            p->prev = q;
            p = p->next;
        }
        printf("Enter the data to be insert :");
        scanf("%d", &p->value);
    }
    p->next = NULL;
    return start;
}

struct node *delete_double_ll(struct node *start, int item)
{
    struct node *p;
    if (start->next == NULL)
    {
        if (start->value = item) // delect at only node
        {
            p = start;
            start = NULL;
            free(p);
            return start;
        }
        else
        {
            printf("%d is not found .");
            return start;
        }
    }

    if(start->value == item)                  //delete at first node
    {
        p = start;
        start = start->next;
        start->prev = NULL;
        return start;

    }

    p = start->next;                         // delect at middle
    while (p->next != NULL)
    {
        if (p->value == item)
        {
            p->prev->next = p->next;
            p->next->prev = p->prev;
            free(p);
            return start;
        }
        p=p->next;
    }

    if (p->value == item)                     //delete at end
    {
        p->prev->next = NULL;
        free(p);
        return start;
    }

    printf("%d is not found in this list .", item);
    return start;
}

// display function
struct node *display(struct node *start)
{
    struct node *p;
    if (start == NULL)
    {
        printf("Empty list .");
    }

    p = start;
    printf("\nThe list is : ");
    while (p != NULL)
    {
        printf("%d", p->value);
        p = p->next;
    }
}

int main()
{
    struct node *start;
    start = create_double_ll();
    display(start);

    int item;
    printf("\nEnter the item which is delete :");
    scanf("%d", &item);
    start = delete_double_ll(start, item);
    display(start);
}
