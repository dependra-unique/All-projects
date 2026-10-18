#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{     
    
    int age;
    printf("Enter your age:");
    scanf("%d", &age);

    if(age>18){
        printf("adult\n");
        printf("They are elligible for voting:\n");
        printf("They are elligible for car driving:\n");
        printf("They are fit in our company:\n");

    }
    else
    {
        printf("Not adult:\n");
        printf("They are not elligible for voting:\n");
        printf("They are not elligible for car driving:\n");
        printf("They are not fitb in our company:\n");


     }
   // age > 18?printf("adult\n"):printf("not adult");

   // int number = 7;

   // int luckynumber = number;
    
   // number == luckynumber?printf("you are lucky\n"):printf("you are npt lucky\n");
    printf("Thankyou:");
}