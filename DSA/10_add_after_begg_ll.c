#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

// add node after a node
struct node *add_afternode(struct node *start, int data1, int item)
{
    struct node *p, *temp;

    p = start;
    while (p != NULL)
    {
        if (p->value == item)
        {
            temp = (struct node *)malloc(sizeof(struct node));
            temp->value = data1;
            temp->next = p->next;
            p->next = temp;
            return start;
        }
        p = p->next;
    }
    printf("Item not found: %d", item);
    return start;
}

// add node at beggining
struct node *addatbegg(struct node *start, int data)
{
    struct node *tem;
    tem = (struct node *)malloc(sizeof(struct node));
    tem->value = data;
    tem->next = start;
    start = tem;
    return start;
}

// display list
struct node display(struct node *start)
{
    struct node *q;
    q = start;
    if (start == NULL)
    {
        printf("Empty list:");
    }

    printf("\nThe list is :");
    while (q != NULL)
    {
        printf("\n%d", q->value);
        q = q->next;
    }
}

int main()
{
    struct node *start;
    start = NULL;

    int i, n, data;
    printf("Enter the nodes :");
    scanf("%d", &n);

    printf("Enter the data to be inserted :");
    scanf("%d", &data);
    start = addatbegg(start, data);
    for (i = 2; i <= n; i++)
    {
        printf("Enter the data to be inserted :");
        scanf("%d", &data);
        start = addatbegg(start, data);
    }

    display(start);
    printf("\n");


    int item, m, data1;

    // printf("Enter the number of items to be inserted: ");
    // scanf("%d", &m);

    printf("Enter the item , after item node inserted");
    scanf("%d", &item);
    printf("Enter the data1 :");
    scanf("%d", &data1);
    start = add_afternode(start, data1, item);
    // for (int k = 2; k <= m; k++)
    // {
    //     printf("Enter the item , after item node inserted :");
    //     scanf("%d", &item);
    //     start = add_afternode(start, data, item);
    // }

    display(start);

}