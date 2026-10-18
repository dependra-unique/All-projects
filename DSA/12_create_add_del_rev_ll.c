#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

struct node *create_ll()
{
    struct node *p, *start;
    start = NULL;
    int i, n;
    printf("Enter the number of node :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            start = (struct node *)malloc(sizeof(struct node));
            p = start;
        }
        else
        {
            p->next = (struct node *)malloc(sizeof(struct node));
            p = p->next;
        }

        printf("Enter the data in the node :");
        scanf("%d", &p->value);
    }
    p->next = NULL;
    return start;
}

// insert node before the particular item
struct node *insert_before_item(struct node *start, int data, int item)
{
    struct node *p, *temp;
    if (start == NULL)
    {
        printf("Empty list.");
    }

    // insert before first item
    if (start->value == item)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->value = data;
        temp->next = start;
        start = temp;
        return start;
    }

    p = start;
    while (p->next != NULL)
    {
        if (p->next->value == item)
        {
            temp = (struct node *)malloc(sizeof(struct node));
            temp->value = data;
            temp->next = p->next;
            p->next = temp;
            return start;
        }
        p = p->next;
    }
    printf("%d is not found in the list.", item);
    return start;
}

// insert node at given position
struct node *insert_position(struct node *start, int data1, int position)
{
    struct node *p, *temp;

    temp = (struct node *)malloc(sizeof(struct node));
    temp->value = data1;

    if (position == 1)
    {
        temp->next = start;
        start = temp;
        return start;
    }

    p = start;

    int i;
    for (i = 1; i < position - 1 && p != NULL; i++)
    {
        p = p->next;
    }

    if (p == NULL)
    {
        printf("there are less than %d elements \n", position);
    }
    else
    {
        temp->next = p->next;
        p->next = temp;
    }

    return start;
}

// for delection
struct node *delect(struct node *start, int data2)
{
    struct node *p, *temp;

    if (start->value == data2)
    {
        temp = start;
        start = start->next;
        free(temp);
        return start;
    }
    p = start;
    while (p->next != NULL)
    {

        if (p->next->value == data2)
        {
            temp = p->next;
            p->next = temp->next;
            free(temp);
            return start;
        }
        p = p->next;
    }

    printf("%d is not found\n", data2);
    return start;
}



//reverse linked list
struct node *reverse_ll(struct node *start)
{
    struct node *prev, *ptr, *nex;
    prev = NULL;
    ptr= start;
    while(ptr!=NULL)
    {
   
    nex = ptr->next;
    ptr->next = prev;
    prev = ptr;
    ptr = nex;

    
    }
    start = prev;
    return start;

}





// display function
struct node display(struct node *start)
{
    if (start == NULL)
    {
        printf("Empty list.");
    }

    struct node *p;
    p = start;
    while (p != NULL)
    {
        printf("%d\t", p->value);
        p = p->next;
    }
}

int main()
{
    int data, item;
    struct node *start;

    // create list
    start = create_ll();
    display(start);

    //for reverse linked list
    printf("\nThe reverse list is .\n");
    start = reverse_ll(start);
    display(start);

    // insert element at this particular item
    printf("\nEnter the data to be insert:");
    scanf("%d", &data);
    printf("\nEnter the item jisse plhe node insert karni h:");
    scanf("%d", &item);
    start = insert_before_item(start, data, item);
    display(start);

    // insert element at particular position
    int position, data1;
    printf("\nEnter the data to be insert a particular position :");
    scanf("%d", &data1);
    printf("\nEnter the position, which you want to be insert element:");
    scanf("%d", &position);
    start = insert_position(start, data1, position);
    display(start);

    // for delection data
    int data2;
    printf("\nEnter the data , jo bhi delect karna h :");
    scanf("%d", &data2);
    start = delect(start, data2);
    display(start);

    
}
