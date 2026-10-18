#include<stdio.h>
#include<stdlib.h>

#define MAX 10
int queue_arr[MAX];
int front = -1;
int rear = -1;
void Q_insert(int item);
int Q_delete();
int peek();
int isEmpty();
int isFull();
void display();

int main()
{
    //insertion function call
    int item, n;
    printf("Enter the number of element in the queue :");
    scanf("%d", &n);
    printf("Enter the element in the queue :");
    scanf("%d", &item);
    Q_insert(item);
    for(int i=2; i<=n; i++)
    {
        printf("Enter the element in the queue :");
        scanf("%d", &item);
        Q_insert(item);
    }
    display();


    //delection function call
    Q_delete();
    display();


    //peek function call
    printf("The element at the front of queue is : %d", peek());
    
}


//insert function of queue
void Q_insert(int item)
{
    if(isFull()){
        printf("Queue is overflow .");
        
    }

    if(front == -1)
    {
        front = 0;
    }
    rear = rear+1;
    queue_arr[rear] = item;
}


//delete function in queue
int Q_delete()
{
    int item;
    if(isEmpty())
    {
        printf("Queue is underflow .");
        exit(1);
    }

    item = queue_arr[front];
    front = front+1;
    return item;
}



//peek function of queue
int peek()
{
    if(isEmpty())
    {
        printf("Queue is underflow .");
        exit(1);
    }

    return queue_arr[front];
}



//isEmpty function of queue
int isEmpty()
{
    if(front == -1 || front == rear+1)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}




//isFull function of queue
int isFull()
{
    if(rear == MAX-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}



//display function of queue
void display()
{
    if(isFull())
    {
        printf("Queue is Empty .");
        
    }

    printf("Queue element is :");
    for(int i = front; i<=rear; i++)
    {
        printf("%d", queue_arr[i]);
    }
    printf("\n");
}