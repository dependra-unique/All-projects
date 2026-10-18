// #include<stdio.h>
// #include<stdlib.h>
// struct n
// {
//     int value;
//     struct n *next;
// };
// typedef struct n node;
//  node *createlist();
//  void traversal(node *head);
 

// void main()
// {
//     node *head;
//     head = createlist();
//     traversal(head);
// }
// node *createlist()
// {
//     int n;
//     node *head, *p, *q;
//     head = (node *)malloc(sizeof(node));
//     p = head;
//     printf("enter the no of nodes you want");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         q = p;
//         scanf("%d", &p->value);
//         p->next = (node *)malloc(sizeof(node));
//         p = p->next;
//     }
//     q->next = NULL;
//     return(head);
// }
// void traversal(node *head)
// {
//     node *p;
//     printf("the elements are:");
//     p = head;
//     while (p != NULL)
//     {
//         printf("%d", p->value);
//         p = p->next;
//     }
// }


// #include<stdio.h>
// #include<stdlib.h>
// struct n
// {
//     int value;
//     struct n *next;
// };
// typedef struct n node;
//  node *createlist();
//  void traversal(node *head);
//  void insert(node*head);
 

// void main()
// {
//     node *head;
//     head = createlist();
//     insert(head);
//     traversal(head);
// }
// node *createlist()
// {
//     int n;
//     node *head, *p, *q;
//     head = (node *)malloc(sizeof(node));
//     p = head;
//     printf("enter the no of nodes you want");
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++)
//     {
//         q = p;
//         scanf("%d", &p->value);
//         p->next = (node*)malloc(sizeof(node));
//         p = p->next;
//     }
//     q->next = NULL;
//     return(head);
// }
// void traversal(node *head)
// {
//     node *p;
//     printf("the elements are:");
//     p = head;
//     while (p != NULL)
//     {
//         printf("%d", p->value);
//         p = p->next;
//     }
// }
// void insert(node*head){
//     int n;
//     node *new,*q,*p;
//     p=head;
//     new =(node *)malloc(sizeof(node));
//     printf("enter the data of new node");
//     scanf("%d",&new->value);
//     printf("enter the data before you wants");
//     scanf("%d",&n);
//     while((p->value!=n)&&(p!=NULL)){
//         q=p;
//         p=p->next;
//     }
//     if(p==NULL){
//         q->next=new;
//         new->next=NULL;
//     }
//     else if(head->value==n){
//         new->next=head;
//         head=new;
//     }
//     else{
//         q->next=new;
//         new->next=p;
//     }
// }




// #include<stdio.h>
// #include<stdlib.h>
// struct n
// {
//     int value;
//     struct n *next;
// };
// typedef struct n node;
//  node *createlist();
//  void traversal(node *head);
//  node *delete(node*head);
 

//  //reverse linked list
// node *reverse_ll(node *start)
// {
//     node *prev, *ptr, *nex;
//     prev = NULL;
//     ptr= start;
//     while(ptr!=NULL)
//     {
   

//     nex = ptr->next;
//     ptr->next = prev;
//     prev = ptr;
//     ptr = nex;

    
//     }
//     start = prev;
//     return start;

// }


// void main()
// {
//     node *head;
//     head = createlist();
//      traversal(head);
//      head = reverse_ll(head);
//       traversal(head);
//     head = delete(head);
//     traversal(head);
// }
// node *createlist()
// {
//     int n;
//     node *head, *p, *q;
//     head = (node *)malloc(sizeof(node));
//     p = head;
//     printf("enter the no of nodes you want");
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++)
//     {
//         q = p;
//         scanf("%d", &p->value);
//         p->next = (node*)malloc(sizeof(node));
//         p = p->next;
//     }
//     q->next = NULL;
//     return(head);
// }
// void traversal(node *head)
// {
//     node *p;
//     printf("the elements are:");
//     p = head;
//     while (p != NULL)
//     {
//         printf("%d", p->value);
//         p = p->next;
//     }
// }
 
 
//  node *delete(node*head)
// {
//     int n;
//     node*p,*q;
//     p=head;
//     printf("enter the data you wants to delete");
//     scanf("%d",&n);
  
//     while((p->value!=n)&&(p!=NULL)){
//         q=p;
//         p=p->next;
//     }
//     if(head->value==n){
//         head=head->next;
//     }
//     else if(p->value==n){
//         q->next=p->next;
//     }
//     else{
//         printf("element not found");
//     }
//     return head;
// }


//delete circular linked list
#include<stdio.h>
#include<stdlib.h>

 struct node{
    int value;
    struct node* next;
 };
 typedef struct node node;
 node* create();
 void traversal(node*head);
 node *delete(node*head);

void main(){
    node*head;
    head=create();
    head = delete(head);
    traversal(head);

}
node* create(){
    int n;
    node*head,*p;
    printf("enter the no of nodes you:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i==0){
            head=(node*)malloc(sizeof(node));
            p=head;
        }
        else{
            p->next=(node*)malloc(sizeof(node));
            p=p->next;
        }
        scanf("%d",&p->value);
        }
        
    
    p->next=head;
    return(head);
}
void traversal(node*head)
{
    node*p;
    p=head;
    do{
        printf("%d",p->value);
        p=p->next;
    }while(p!=head);
}
node  *delete(node*head){
    int n;
    node*p,*q;
    printf("enter the value you wants to delete:");
    scanf("%d",&n);
    p=head;
    if(p->value==n){
        q=head;
       head = head->next;
       while(p->next!=q)
       {
         p = p->next;
       }
        p->next = head;
        free(q);
        return head;
    }
    else{
        do{
            q=p;
            p=p->next;

        }while((p->value!=n)&&(p!=head));
        if(p->value==n){
            q->next=p->next;
            free(p);
        }
        else{
            printf("element not found:");
        }
    }
    return head;

}