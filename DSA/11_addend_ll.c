#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

struct node *addatend(struct node *start, int data)
{
    struct node *tem, *p = start;
    tem = (struct node *)malloc(sizeof(struct node));
    tem->value = data;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = tem;
    tem->next = NULL;

    return start;
}

struct node display(struct node *start)
{
    struct node *q = start;
    if (start == NULL)
    {
        printf("This is empty list: ");
    }
    while (q != NULL)
    {
        printf("%d", q->value);
        q = q->next;
    }
}

int main()
{
    struct node *start = NULL;

    int i, n, data;
    printf("Enter the nodes to be inserted at end  of the list:");
    scanf("%d", &n);
    
    if(n==0)
    {
        return -1;
    }
    printf("Enter the data :");
    scanf("%d", &data);
    start = addatend(start, data);

    for (i = 2; i <= n; i++)
    {
        printf("Enter the data :");
        scanf("%d", &data);
        start = addatend(start, data);
    }

    display(start);
}