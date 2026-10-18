#include<stdio.h>
#include<stdlib.h>

struct node {
    int value;
    struct node *next;
};



//adding empty node
struct node *addatempty(struct node *last , int data)
{
    
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->value = data;
    temp->next = temp;
    last = temp;
    return last;
}



//node adding at end of the list
struct node *addatend_CLL(struct node *last, int data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->value = data;
    temp->next = last->next;
    last->next = temp;
    last = temp;
    return last;
}



//create circular linked list
struct node *create_CLL(struct node *last)
{
    int i, n;
    printf("Enter the number of nodes :");
    scanf("%d", &n);
    last = NULL;
    if(n==0)
    {
        return 0;
    }

    int data;
    printf("Enter the data to be insert :");
    scanf("%d", &data);

    last = addatempty(last, data);

    for(i = 2; i<=n; i++)
    {
        printf("Enter the data to be insert :");
        scanf("%d", &data);
        last = addatend_CLL(last, data);
    }
   
    return last;
   
}




//display/traverse the circular linked list
struct node display_CLL(struct node *last)
{
    struct node *p;
    if(last == NULL)
    {
        printf("Empty circular linked list");
    }

    p = last->next;
    do{
        printf("%d", p->value);
        p = p->next;
    }while(p!=last->next);
}



//delete node in circular linked list
struct node *del_CLL(struct node *last, int data)
{
    struct node *p, *temp;
    if(last == NULL)
    {
        return 0;
    }

    if(last->next == last && last->value == data)   //delete only one node
    {
        temp = last;
        last = NULL;
        free(temp);
        return last;
    }

    if(last->next->value == data)    //delete first node of the list
    {
        temp = last->next;
        last->next = temp->next;
        free(temp);
        return last;
    }

    p = last->next;
    while(p->next!=last)        //delete middle node of the list
    {
        if(p->next->value == data)
        {
            temp = p->next;
            p->next = temp->next;
            free(temp);
            return last;
        }
        p = p->next;
    }
    
    if(last->value == data)      // last node delete
    {
        temp = last;
        p->next = last->next;
        last = p;
        free(temp);
        return last;

    }
    printf("%d is not found in the list .");
    return last;


}






int main()
{
    struct node *last;
    last = create_CLL(last);
    display_CLL(last);

    //del nodes of the list
    int data;
    printf("\nEnter the data jo bhi delete karna h :");
    scanf("%d", &data);
    last = del_CLL(last, data);
    display_CLL(last);
}
