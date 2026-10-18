#include<stdio.h>
#include<conio.h>
void main()
{
    int rem, rev = 0;
    int n1;
    printf("Enter the number of n1:");
    scanf("%d", &n1);

    while(n1>0){
        rem = n1%10;
        rev= rem + rev*10;
        n1 = n1/10;
    }
    printf("%d", rev);
   getc;
    }
    

