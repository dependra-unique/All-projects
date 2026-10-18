#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("Enter the age:");
    scanf("%d", &age);

    (age>=18)?printf("person is adult"):printf("person is not adult");

    return 0;
}