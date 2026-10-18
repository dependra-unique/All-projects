#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *back, *next;
};

struct node *create_double_ll()
{
    struct node *start, *p, *q;

    start = NULL;
    int n, i;
    printf("Enter the number of node:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {

        if (i == 0)
        {
            start = (struct node *)malloc(sizeof(struct node));
            p = start;
            p->back = NULL;
        }
        else
        {
            p->next = (struct node *)malloc(sizeof(struct node));
            q = p->next;
            p->back = q;
            p = p->next;
        }
        printf("Enter the value of node:");
        scanf("%d", &p->value);
    }
    p->next = NULL;
    return start;
}

// add nodes before the given node
struct node *addbefore_node(struct node *start, int data3, int item2)
{
    struct node *q, *temp;

    if (start->value == item2)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->value = data3;
        temp->back = NULL;
        temp->next = start;
        start->back = temp;
        start = temp;
        return start;
    }

    q = start;

    while (q->next!= NULL)
    {
        if (q->next->value == item2)
        {
            temp = (struct node *)malloc(sizeof(struct node));
            temp->value = data3;
            temp->next = q->next;
            q->back = temp;
            q->next = temp;
            temp->back = q;
            return start;

           
        }
        q = q->next;
    }
    printf("%d is not found in the list .", item2);
    return start;
   
}

// display list
struct node display(struct node *start)
{
    struct node *p;
    p = start;
    if (start = NULL)
    {
        printf("Empty list.");
    }

    printf("The list is:");
    while (p != NULL)
    {
        printf("%d", p->value);
        p = p->next;
    }
}

int main()
{
    struct node *start;
    start = NULL;
    // create node
    start = create_double_ll();
    display(start);

    // add before given node
    int data3, item2;
    printf("\nEnter the data3, for ading before given node :");
    scanf("%d", &data3);

    printf("\nEnter item2 before which to insert :");
    scanf("%d", &item2);
    start = addbefore_node(start, data3, item2);
    display(start);
}
