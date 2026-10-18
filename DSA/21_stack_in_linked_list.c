#include<stdio.h>
#include<stdlib.h>

struct node {
    int value;
    struct node *next;
}*top = NULL;
typedef struct node stack;


//push function in linked list
void push(int item)
{
    stack *temp;
    temp = (stack *)malloc(sizeof(stack));

    if(temp==NULL)
    {
        printf("Stack is ovewflow.");
        exit(1);
    }
    temp->value = item;
    temp->next = top;
    top = temp;
}




//isEmpty function in linked list
int isEmpty()
{
    if(top == NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
}



//pop function in linked list
int pop()
{
    stack *temp;
    int item;
    if(isEmpty())
    {
        printf("Stack is Empty .");
        exit(1);
    }
    temp = top;
    item = temp->value;
    top = top->next;
    free(temp);
    return item;
}


//peek function in linked list 
int peek()
{
    if(isEmpty())
    {
        printf("Stack is underflow .");
        exit(1);
    }
    return top->value;
}


//display function in linked list
void display()
{
    stack *p;

    if(isEmpty())
    {
        printf("Stack is empty .");
        exit(1);
    }
    p = top;
    printf("The stack element is :\n");
    while(p!=NULL)
    {
        printf("%d\n", p->value);
        p = p->next;
    }
}




int main()
{
    //push function calling in linked list
    int item, n;
    printf("Enter the number of nodes :");
    scanf("%d", &n);
    printf("Enter the item to be inserted in stack linked list :");
    scanf("%d", &item);
    push(item);
    for(int i=1; i<n; i++)
    {
        printf("Enter the item to be inserted in stack linked list :");
        scanf("%d", &item);
        push(item);
    }
    display();

    //pop function calling in linked list
    pop();
    pop();
    display();


    //peek function calling
    printf("Item at the top of the stack is %d\n", peek());


}
