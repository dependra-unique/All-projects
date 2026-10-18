#include<stdio.h>
#include<stdlib.h>

struct node {
    int value;
    struct node *next;
}*front = NULL, *rear = NULL;

void q_insert_ll(int item);
int q_del_ll();
int isEmpty();
int peek();
void display();

int main()
{
    //insert function call in linked list
    int item, n;
    printf("Enter the number of element in queue :");
    scanf("%d", &n);
    printf("Enter the element of queue :");
    scanf("%d", &item);
    q_insert_ll(item);

    for(int i=2; i<=n; i++)
    {
        printf("Enter the element of queue :");
        scanf("%d", &item);
        q_insert_ll(item);
    }
    
    display();

    //peek function calling
    printf("\nThe element at th front is : %d", peek());


    //q_del_ll function calling
//     q_del_ll();
//     display();
     printf("\nThe delected element is : %d", q_del_ll());
}


//linked list implementation of queue
void q_insert_ll(int item)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    if(temp == NULL)
    {
        printf("Memory not allocated .");
    }

    temp->value = item;
    temp->next = NULL;
    if(front == NULL)
    {
        front = temp;
    }
    else{
        rear->next = temp;
    }
    
    rear = temp;
} 


//delete function of queue
int q_del_ll()
{
    struct node *p;
    int item;
    if(isEmpty())
    {
        printf("Queue is underflow .");

    }
    p = front;
    item = p->value;
    front = front->next;
    free(p);
    return item;
}


//isEmpty function 
int isEmpty()
{
    if(front == NULL || rear == NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
}



// peek function
int peek()
{
    if(front == NULL){
        printf("Queue is empty .");
        exit(1);
    }

    return front->value;
}



//display function of queue linked list element display
void display()
{
    struct node *p;
    if(isEmpty())
    {
        printf("Queue is empty .");
    }

    p = front;
    printf("The queue element is :");
    while(p!=NULL)
    {
        printf("%d", p->value);
        p = p->next;
    }
}