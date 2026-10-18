#include<stdio.h>
#include<conio.h>
int main()
{
    char days;  //1monday 2tuesday 3w 4t 5f 6s 7s
    printf("Enter the day(1---7) :");
    scanf("%d", &days);

    switch(days){

    case 1 : printf("Monday\n");
             break;
    case 2 : printf("Tuesday\n");
             break;
    case 3 : printf("Wedensday\n");
             break;
    case 4 : printf("Thursday\n");
             break;
    case 5 : printf("Friday\n");
             break;
    case 6 : printf("Saturday\n");
             break;
    case 7 : printf("Sunday\n");
             break;
        default : printf("Not a valid day\n");

     return 0;
    }
}