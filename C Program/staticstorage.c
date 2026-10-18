#include <stdio.h>
void ref()
{
static int a= 1;
static int b= 11;
printf("a = %d\nb = %d \n" , a,b);
a++;
b++;
}

int main()
{
int i ;
for( i= 0; i<3; i++);
ref();
}