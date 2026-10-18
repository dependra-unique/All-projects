#include<stdio.h>
#include<conio.h>
void main()
{
    int n, r = 0, rem, z;
    printf("Enter the number");
    scanf("%d", &n);
    z = n;
    while(n>0)
    {
        rem = n%10;
        r = r + (rem*rem*rem);
        n = n/10;

    }
   // printf("%d", r);
    if(r == z)
    {
        printf("%d is Armstrong", r);
    }
    else{
        printf("%d is not Armstrong", r);
    }
    getc;
}