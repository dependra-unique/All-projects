#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float a, b, c, s, area;
    printf("Enter the value of a, b, c:");
    scanf("%f%f%f", &a, &b, &c);
    s = (a+b+c)/2;
    printf("s is = %f\n", s);
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area is = %f", area);
    getc;


}