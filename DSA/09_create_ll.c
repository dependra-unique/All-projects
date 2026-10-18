#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;

};

//create list function
struct node *create_ll(struct node *start)
{
    int i, n;
    struct node *p;
    printf("Enter the numbers of node :");
    scanf("%d", &n);

    if(n==0)
    {
        printf("Please , enter number of node :");
        scanf("%d", &n);
    }

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
        printf("Enter the value of node :");
        scanf("%d", &p->value);
    }
    p->next = NULL;
    return start;
}


// display function
struct node display(struct node *start)
{
    struct node *p;
    if(start == NULL)
    {
        printf("The list is empty .");

    }

    int count =0;
    p = start;
    while(p!=NULL)
    {
        printf("%d\t",p->value);
        p= p->next;
        count++;
    }

    printf("\nThe total node is : %d", count);

}

int main()
{
    struct node *start;
    start = NULL;

    start = create_ll(start);

    display(start);

}