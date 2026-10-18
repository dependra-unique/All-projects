#include<stdio.h>
#include<stdlib.h>

struct node {
    int value;
    struct node *next, *prev;

};

//create doubly linked list
struct node *create_double_ll()
{
    struct node *start, *p, *q;
    start = (struct node *)malloc(sizeof(struct node));
    int n, i;
    printf("Entter the number of node :");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        if(i==0)
        {
            start = (struct node *)malloc(sizeof(struct node));
            p=start;
            p->prev=NULL;
        }
        else{
            p->next = (struct node *)malloc(sizeof(struct node));
            q= p->next;
            p->prev=q;
            p = p->next;
        }
        printf("\nEnter the value of double linked list: ");
        scanf("%d", &p->value);
    }
    p->next = NULL;
    return start;
}


//reverse doubly linked list
struct node *reverse_double_ll(struct node *start)
{
    struct node *p, *q;
    p = start;
    q = p->next;
    p->next = NULL;
    p->prev =q;
   

    while(q!=NULL)
    {
        q->prev = q->next;
        q->next =p;
        p = q;
        q = q->prev;
    }

    start = p;
    printf("\nReverse,");
    return start;
    
}




struct node display(struct node *start)
{
    struct node *p;
    if(start == NULL)
    {
        printf("Empty list :");
        
    }

    p = start;
    printf("The list is :");
    while(p!=NULL)
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
    start = reverse_double_ll(start);
    display(start);

}