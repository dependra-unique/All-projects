#include<stdio.h>
#include<stdlib.h>

struct node {
    int value;
    struct node *back, *next;

};

struct node *create_double_ll()
{
    struct node *start, *p, *q;

    start = NULL;
    int n , i;
    printf("Enter the number of node:");
    scanf("%d", &n);

    for(i=0; i<n; i++){

        if(i==0)
        {
            start=(struct node *)malloc(sizeof(struct node));
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

// //double empty list
// struct node *addempty(struct node *start , int data){

//         struct node *temp;
//         temp = (struct node *)malloc(sizeof(struct node));
//         temp->value =data;
//         temp->next = NULL;
//         temp->back = NULL;
//         start = temp;

//         return start;

// }

//add nodes at beggning
struct node *addatbegg(struct node *start , int data)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp ->value = data;
    temp->back=NULL;   
    temp->next = start;
    start->back =temp;
    start = temp;
    return start;

}

//nodes addatend 
struct node *addatend(struct node *start, int data1)
{
    struct node *p;
    if(start==NULL)
    return 0;
    p = start;

    while(p->next!=NULL)
    {
        p= p->next;

    }

    struct node *temp, *q;
    temp= (struct node *)malloc(sizeof(struct node));
    temp->value = data1;
    temp->next =NULL;
    p->next = temp;
    q = p->next;
    temp->back = q;

    return start;

}


//adding nodes in middle, after given node
struct node *addafter_node(struct node *start, int data2, int item)
{
    struct node *p, *temp;
    p = start;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->value = data2;
    while(p!= NULL)
    {
        if(p->value == item)
        {
           temp->back = p;
           temp->next = p->next;
           if(p->next = NULL){
           p->next->back = temp;
           }
           p->next = temp;
        }
        p= p->next;
    }
    printf("\n%d is not found in the present list .\n", item);
    return start;
}


//add nodes before the given node
struct node *addbefore_node(struct node *start, int data3, int item2)
{
    struct node *q, *temp;
    temp= (struct node *)malloc(sizeof(struct node));
    temp->value = data3;
    if(start->value == item2)
    {
        temp->back = NULL;
        temp->next = start;
        start->back = temp;
        start = temp;
        return start;
    }
    
    q=start;
    while(q!=NULL)
    {
        if(q->value == item2)
        {
            temp->back = q->back;
            temp->next = q;
            q->back= temp;
            q->back->next = temp;
        }
        q = q->next;
    }
    printf("%d is not found in the list .", item2);
    return start;
}



//display list
struct node display(struct node *start)
{
    struct node *p;
    p=start;
    if(start = NULL)
    {
        printf("Empty list.");

    }

    printf("The list is:");
    while(p!=NULL)
    {
        printf("%d", p->value);
        p=p->next;
    }

}

int main()
{
    struct node *start;
    start = NULL;
    //create node
    start = create_double_ll();
    display(start);

    //add at beggning
    int data, n, i;
    printf("\nEnter the number of nodes adding at beggning :");
    scanf("%d", &n);

    printf("\nEnter the data to be insert at beggning :");
    scanf("%d", &data);
    start = addatbegg(start, data);

    for(i=1; i<n; i++)
    {
    printf("\nEnter the data to be insert at beggning :");
    scanf("%d", &data);
    start = addatbegg(start, data);
    }
    display(start);

    //add at end
    int data1, m, j;
    printf("\nEnter the number of nodes to be insert at end of the list :");
    scanf("%d", &m);

    printf("\nEnter the data1 , to be insert at end of the list:");
    scanf("%d", &data1);
    start = addatend(start, data1);

    for(j=1; j<m; j++)
    {
    printf("\nEnter the data1 , to be insert at end of the list:");
    scanf("%d", &data1);
    start = addatend(start, data1);

    }
    display(start);

    //add after given node
    int x, k, data2, item;
    printf("\nHow many nodes are inserted , after the given node :");
    scanf("%d", &x);

    printf("\nEnter the item before which to insert :");
    scanf("%d", &item);

    printf("\nEnter the data2 , for adding data after given node :");
    scanf("%d", &data2);

    start = addafter_node(start, data2, item);
    for(int k=1; k<x; k++)
    {
        printf("\nEnter the data2 , for adding data after given node :");
        scanf("%d", &data2);
        start = addafter_node(start, data2, item);
    }
    display(start);


    //add before given node
    int data3, item2;
    printf("\nEnter the data3, for ading before given node :");
    scanf("%d", &data3);

    printf("\nEnter item2 before which to insert :");
    scanf("%d", &item2);
    start = addbefore_node(start, data3, item2);
    display(start);
}


