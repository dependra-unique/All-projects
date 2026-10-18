#include<stdio.h>
#include<conio.h>
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);

    if(number >=0){
        printf("positive number\n");
      if(number%2==0){
          printf("Even number\n");
      }else{
          printf("Odd number\n");
      }

    }else{
        printf("negative number\n");
    }
    return 0;
}