#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    printf("Enter the value of a, b");
    scanf("%d%d", &a, &b);
    printf("%d", a++);   //a= a+1
    printf("%d", b--);   //b= b-1
    printf("%d", b++);   //b= b+1
    printf("%d", --a);   //a= a-1

    return 0;


}