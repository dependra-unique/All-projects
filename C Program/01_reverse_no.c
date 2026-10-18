#include<stdio.h>
#include<conio.h>

int main(){

    int num = 143;
    int reverse = 0;
    int rem;
    while(num!=0){
        rem = num%10;
        reverse = reverse*10 + rem;
        num = num/10;

    }

    printf("The reverse number is :", reverse);
}
