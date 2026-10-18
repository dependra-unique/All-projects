#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int stack_arr[MAX];
int top = -1;
void push(int data);
int pop();
int peek();
int isEmpty();
int isFull();
void display();


int main()
{
    // push function calling
    int data;
    printf("Enter the data to be insert in stack :");
    scanf("%d", &data);
    push(data);
    for(int i = 1; i<MAX-1; i++)
    {
        printf("Enter the data to be insert in stack :");
        scanf("%d", &data);
        push(data);
    }
    display();
    

    //pop function calling
    pop();
    display();

    //peek function calling
    printf("Item at the top is %d\n", peek());
    


}




//push function in array implementation
void push(int data)
{
    if(isFull())
    {
        printf("Stack is overflow .");
        

    }
    top = top+1;
    stack_arr[top] = data;
}




//pop function in stack
int pop()
{
    if(isEmpty())
    {
        printf("Stack is underflow.");
        exit(1);
    }
    int item;
    item = stack_arr[top];
    top = top-1;
    return item;
}



//peek function in stack
int peek()
{
    if(isEmpty())
    {
        printf("Stack is underflow.");
        exit(1);
    }
    return stack_arr[top];
}

//isFull function in stack
int isFull()
{
    if(top == MAX - 1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

//isEmpty function in stack
int isEmpty()
{
    if(top == -1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

//display function of stack element
void display()
{
    if(isEmpty())
    {
        printf("Stack is empty.");
    
    
    }

    printf("Stack elements is :");

    for(int i = top; i>=0; i--)
    {
        printf("%d\n", stack_arr[i]);

    }

}

