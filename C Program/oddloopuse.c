#include<stdio.h>
void main()
{
    int n;
    char another;
    do{
        printf("Enter a number");
        scanf("%d", &n);
        printf("square of %d is %d", n, n*n);
        printf("\nWant to enter another number y/n");
        scanf("%c", &another);
    }while(another == 'y');
    
}
