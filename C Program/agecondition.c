#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    printf("Enter the age");
    scanf("%d", &age);
    if(age>=18)
    {
        printf("%d Person is elligible",age);
    }
    else
    {
        printf("%d Person is not elligible",age);
    }
    getch();
}