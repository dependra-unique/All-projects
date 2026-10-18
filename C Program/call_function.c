#include<stdio.h>
#include<conio.h>
#include<math.h>
float square(float a);
float rectangle(float x, float y);
float circle(float r);
float triangle(float o, float p, float q);
int main()
{
    float x, y, o, p, q, r, s, a;
    printf("Enter the side of square:a");
    scanf("%f", &a);
    printf("Enter the sides of rectangle:x, y:");
    scanf("%f%f", &x, &y);
    printf("Enter the radious of circle:r");
    scanf("%f", &r);
    printf("Enter the sides of triangle:o, p, q:");
    scanf("%f%f%f", &o, &p, &q);
    printf("The area of square = %f", square(a));
    printf("The area of rectangle = %f", rectangle(x, y));
    printf("The area of circle = %f", circle(r));
    printf("The area of triangle = %f", triangle(o, p, q));
    return 0;


}float square(float a){
    float s_area = a*a;
    return s_area;

}float rectangle(float x, float y){
    float rec_area = x*y;
    return rec_area;

}float circle(float r){
    float cir_area = 3.14*r*r;
    return cir_area;
}float triangle(float o, float p, float q){
   float s = (o + p + q)/2;
   float tri_area = sqrt(s*(s-o)*(s-p)*(s-q));
   return tri_area; 
}