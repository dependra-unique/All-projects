#include<stdio.h>
#include<conio.h>
void main()
{
    int fact = 1, n;
    printf("Enter the number:");
    scanf("%d", &n);
    while(n>0){
        fact = fact*n;
        n = n-1;
    }
    printf("%d", fact);
    getc;
}