#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

struct node *addatend(struct node *start, int item)
{
    struct node *tem, *p = start;
    tem = (struct node *)malloc(sizeof(struct node));
    tem->value = item;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = tem;
    tem->next = NULL;

    return start;
}

// create list without function , insert nodes at begning
int main()
{
    struct node *start;
    start = NULL;
    // struct node create_list(struct node *start)

    int n, i, data;
    printf("Enter the number of nodes :");
    scanf("%d", &n);

    if (n == 0)
    {
        return start;
    }
    printf("Enter the data in linked list :");
    scanf("%d", &data);

    struct node *tmp;

    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->value = data;
    tmp->next = start;
    start = tmp;

    for (i = 2; i <= n; i++)
    {
        printf("Enter the data in linked list :");
        scanf("%d", &data);

        struct node *tmp;

        tmp = (struct node *)malloc(sizeof(struct node));
        tmp->value = data;
        tmp->next = start;
        start = tmp;
    }

    // insert node at end
    int item, m;
    printf("How many nodes are insert at the end of the list :");
    scanf("%d", &m);

    printf("Enter the data that you want to be inseted at end of the list :");
    scanf("%d", &item);
    start = addatend(start, item);
    for (int k = 2; k <= m; k++)
    {
    
        printf("Enter the data that you want to be inseted at end of the list :");
        scanf("%d", &item);
        start = addatend(start, item);
    }

    struct node *p;
    p = start;
    int count = 0;
    printf("insert node at the beggining :");
    while (p != NULL)
    {
        printf("%d", p->value);
        p = p->next;
        count++;
    }
    printf("\n\n");
    printf("The number of node is : %d", count);
    printf("\n");
}
