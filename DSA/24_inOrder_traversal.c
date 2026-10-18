 #include<stdio.h>
#include<malloc.h>

struct node{
    int value;
    struct node* left;
    struct node* right;

};

struct node* createnode(int data){
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n->value = data;
    n->left = NULL;
    n->right = NULL;

    return n;
}

void inorder(struct node* root)
{
    if(root!=NULL){
       
        inorder(root->left);
        printf("%d ", root->value);
        inorder(root->right);
        
    }
    
}

int main(){

    struct node* p = createnode(2);
     struct node* p1 = createnode(3);
      struct node* p2 = createnode(4);
       struct node* p3 = createnode(5);
        struct node* p4 = createnode(6);


    // //tree is 

    //          2
    //         /  \
    //        3    4
    //       / \
    //      5   6 

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;


    inorder(p);

    return 0;



}