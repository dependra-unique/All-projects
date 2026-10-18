#include<stdio.h>
#include<malloc.h>

struct node {
    int data;
    struct node* left;
    struct node* right;

};

struct node* createnode(int data)
{
    struct node* p = (struct node*)malloc(sizeof(struct node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;

}
int main()
{
    // //contructing the first node
    // struct node* p = (struct node*)malloc(sizeof(struct node));
    // p->data = 2;
    // p->left = NULL;
    // p->right = NULL;

    //  //contructing the second node
    // struct node* p1 = (struct node*)malloc(sizeof(struct node));
    // p->data = 3;
    // p1->left = NULL;
    // p1->right = NULL;

    //  //contructing the third node
    // struct node* p2 = (struct node*)malloc(sizeof(struct node));
    // p->data = 4;
    // p2->left = NULL;
    // p2->right = NULL;


    // //Linking the root node with left and right children
    // p->left =p1;
    // p->right = p2;


    //contructing the tree using function
    struct node* p = createnode(2);
    struct node* p1 = createnode(2);
    struct node* p2 = createnode(2);

    
    //Linking the root node with left and right children
    p->left =p1;
    p->right = p2;

    return 0;
}