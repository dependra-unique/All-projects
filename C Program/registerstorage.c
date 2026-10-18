#include <stdio.h>
int main()
{
register int a= 3;
printf("%u" ,&a);// this will given a compile time error since we can not access the address of a program 
}