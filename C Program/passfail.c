#include<stdio.h>
#include<conio.h>
int main()
{
    int marks;
    printf("Enter the marks(1---100):");
    scanf("%d", &marks);
    
    if(marks >= 0 && marks <23){
        printf("Student is fail\n");

    }else if(marks >=60 && marks <= 70){
        printf("Student have first devision\n");
    }else if(marks > 70 && marks <= 80){
        printf("Grade A\n");
    }else if(marks > 80 && marks <= 90){
        printf("Grade A+\n");
    }else if(marks > 90 && marks <= 100){
        printf("Grade A++\n");
    }else
    {
        printf("Student is passed\n");
    }
    return 0;
     
        
    }
    