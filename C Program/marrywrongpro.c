#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("Enter the n");
    scanf("%d", &age);

    if(age>=1){
        if(age >= 21){
        printf("female are eligible for marry");
       } if(age >=21 && age >=23){
            printf("both are eligible for marry");
            
        }
        

    }
    else{
       printf("you are not eligible for marry");
    
}