#include <stdio.h>
#include <conio.h>
int main()

{
    int a, b, c;
    printf("Entetr the value of a, b");
    scanf("%d%d", &a, &b);
    c = (a>b)?a:b;
    printf("c = %d", c);
    return 0;
}