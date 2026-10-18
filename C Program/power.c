#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a, b, ans;
    printf("Enter the value of a, b:");
    scanf("%d%d", &a, &b);
    ans = pow(a, b);
    printf("ans is = %d", ans);
    return 0;
}