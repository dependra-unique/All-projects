#include<stdio.h>
#include<conio.h>
int main()
{
    // int i = 5;
    // do{
    //     printf("%d\n", i);
    //     i--;
    // }while(i>=1);
    //  char ch = 'a';
    //  do{
    //      printf("%c\n", ch);
    //      ch++;
    //  }while(ch<='z');

    // float f = 1.0;
    // do{
    //     printf("%f\n", f);
    //     f++;
    
    // }while(f<=9.0);

    // int n;
    // do {
    //     printf("Enter the number");
    //     scanf("%d", &n);
    //     printf("%d\n", n);

    //     if(n%2 != 0){
    //         break;
    //     }

    // } 
    // while(1);
    // printf("no is odd");

    int n;
    do{
    printf("Enter the number:");
    scanf("%d", &n);
    printf("%d\n", n);

    if(n%7 == 0){
        break;
    }


    }while(1);
    printf("thank you");
    
    return 0;
}