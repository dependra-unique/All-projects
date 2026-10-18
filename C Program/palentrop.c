#include<stdio.h>
#include<conio.h>
void main()
{
    int n, rem, rev = 0, k;
    printf("Enter the number:");
    scanf("%d", &n);

    k = n;
    while(n>0)
    {
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
   
    if(rev == k)
    {
        
        printf("%d is Palentrop", rev);
    }
    else{
        printf("%d is not a Palentrop", rev);
    }
   
    getc;
}