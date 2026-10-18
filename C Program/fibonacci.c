#include<stdio.h>
#include<conio.h>
void main()
{
    int a = 0, b = 1, n, c;
    printf("Enter the number:");
    scanf("%d", &n);
    printf("%d%d", a, b);
    for(int i = 2; i<n; i++)
    {
        c = a+b;
        a = b;
        b = c;
        printf("%d", c);
    }
    getc;
}