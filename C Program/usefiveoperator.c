#include <stdio.h>
#include <conio.h>
int main()
{
    int num1, num2, sum, sub, mul, div, modulus;
    printf("Enter the value of num1\nEnter the value of num2\n");
    scanf("%d%d", &num1, &num2);
    sum = num1+num2;
    sub = num1-num2;
    mul = num1*num2;
    div = num1/num2;
    modulus = num1%num2;
    printf("The sum of the numbers is = %d\n", sum);
    printf("The sub of the numbers is = %d\n", sub);
    printf("The mul of the numbers is = %d\n", mul);
    printf("The div of the numbers is = %d\n", div);
    printf("The modulus of the numbers is = %d\n", modulus);

    return 0;
    
    }