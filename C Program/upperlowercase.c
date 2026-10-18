#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z') {
        printf("Upper case\n");

    }
    else if(ch >= 'a' && ch <= 'z') {
        printf("Lower case\n");
    }
    else
    {
        printf("No english character\n");
    }
    return 0;

}