#include <stdio.h>
#include <stdlib.h>

// create a node
struct node
{
    int value;
    struct node *next;
};

// insert the nodes at beggining
struct node *addatbegg(struct node *start, int data)
{
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->value = data;
    temp->next = start;
    start = temp;
    return start;
}

// insert the nodes at the end of the list
struct node *addatend(struct node *start, int item)
{
    struct node *tem, *q;
    tem = (struct node *)malloc(sizeof(struct node));
    tem->value = item;
    q = start;
    while (q->next != NULL)
    {
        q = q->next;
    }
    q->next = tem;
    tem->next = NULL;
    return start;
}

// display the list
struct node display(struct node *start)
{
    struct node *p;
    if (start == NULL)
        printf("empty list.");

    int count =0;
    p = start;
    while (p != NULL)
    {

        printf("%d", p->value);
        p = p->next;
        count++;
    }
    // printf("\n");
    printf("\nTotal nodes is : %d", count);
}

int main()
{
    struct node *start;
    start = NULL;

    // nodes add at begg
    int n, data;
    printf("Enter the numbers of nodes: ");
    scanf("%d", &n);

    if (n == 0)
    {
        return 0;
    }
    printf("Enter the data in this node : ");
    scanf("%d", &data);
    start = addatbegg(start, data);

    for (int i = 2; i <= n; i++)
    {

        printf("Enter the data in this node : ");
        scanf("%d", &data);
        start = addatbegg(start, data);
    }

    // nodes adda at end of list

    int item, m;
    printf("How many nodes are inserted at end of list:");
    scanf("%d", &m);

    printf("Enter the item that you want to be inserted at end of list :");
    scanf("%d", &item);
    start = addatend(start, item);

    for (int k = 2; k <= m; k++)
    {

        printf("Enter the item that you want to be inserted at end of list :");
        scanf("%d", &item);
        start = addatend(start, item);
    }

    display(start);
}