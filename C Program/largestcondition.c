#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b;
    printf("Enter the value of a, b");
    scanf("%d%d", &a, &b);
    if(a>b)
    {
        printf("a is largest from b = %d", a, b);
    
    }
    else
    {
        printf("a is smaller than b = %d",a, b);
    }
    getch();
}