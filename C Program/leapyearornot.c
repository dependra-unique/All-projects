#include<stdio.h>
#include<conio.h>
void main()
{
    int year;
    printf("Enter the year");
    scanf("%d", &year);
    if(year%4==0)
    {
        printf("year is leap year = %d",year);
    }
    else
    {
        printf("year is not leap year = %d", year);

    }
    getch();
}




