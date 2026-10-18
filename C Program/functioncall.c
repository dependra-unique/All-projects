#include<stdio.h>
#include<conio.h>
#include<math.h>
  //declaration/prototype
// void printHello();
// void printGoodbye();

// int main() {
//     printHello();
//     printGoodbye();
//     printHello();//function call
//     return 0;
// }
//   //function definition
// void printHello() {
//     printf("Hello!\n");
   

// }
// void printGoodbye() {
//     printf("Goodbye\n");
// }


// void namaste();
// void bonjour();

// int main(){
//     printf("Enter i for indian & f for french:");
//     char ch;
//     scanf("%c", &ch);

//     if(ch == 'i'){
//         namaste();
//     }else {
//          bonjour();
//     }
//     return 0;

// }

// void namaste(){
//     printf("namaste\n");
// }
// void bonjour() {
//     printf("bonjour");
// }

//call by value
// void swap(int , int );
// int main(){
//     int a, b;
//     printf("Enter the number of a & b:");
//     scanf("%d%d", &a, &b);
//     printf("Before swapping\na = %d\nb = %d\n", a, b);
//     swap(a, b);
//     printf("After swapping\na = %d\nb = %d\n", a, b);
//     return 0;
// }
// void swap(int p, int q){
//     int c = p;
//     p = q;
//     q = c;
//     printf("After swapping\np = %d\nq = %d\n", p, q);
//     return 0;

// }

// call by reference
// int swap(int* , int* );
// int main(){
//     int a, b;
//     printf("Enter the number of a & b:");
//     scanf("%d%d", &a, &b);
//     printf("Before swapping\na = %d\nb = %d\n", a, b);
//     swap(&a , &b);
//     printf("After swapping\na = %d\nb = %d\n", a, b);
//     return 0;

// }
// int swap(int *x, int *y) {
//     int tem = *x;
//     *x = *y;
//     *y = tem;
//     printf("After swapping\na = %d\nb = %d\n", *x, *y);
//     return 0;
// }

// call by value addition program
// int add(int a, int b);
// int main(){
//   int a, b, c;
//   printf("Enter the number of a & b");
//   scanf("%d%d", &a, &b);
//    c = add(a, b);
  
//   return 0;

// }
// int add(int p, int q){
//   int c = p+q;
//   printf("The addition a & b = %d", c);
//   return c;
// }

// call by reference addition program
// int add(int*, int*);
// int main(){
//     int a, b;
//     printf("Enter the number of a , b:");
//     scanf("%d%d", &a, &b);
//     add(&a, &b);
//     return 0;
    
// }
// int add(int *p, int *q){
//   int z = (*p)+(*q);
//   printf("The addition is = %d", z);
//   return z;
// }


//power of any number
// int main(){
// int n=2;
// printf("Enter the number:");
// scanf("%d", &n);
// printf(" %f", pow(n, 2));
// return 0;
// }


float squirearea(float a);
float circlearea(float r);
float rectangular(float b, float c);
int main(){
  float a, b, r, c;
  printf("Enter the side");
  scanf("%f", &a); 
  printf("Area of squire is = %f", squirearea(a));
  //return 0;

  printf("\nEnter the radious");
  scanf("%f", &r);
  printf("Area of circle is = %f\n", circlearea(r));
  //return 0;

  printf("\nEnter the sides of b & c");
  scanf("%f%f", &b, &c);
  printf("Area of rectangular is = %f\n", rectangular(b, c));
  //return 0;
  
}
float squirearea(float a){
  
  return a*a;
}
float circlearea(float r){
  
  return 3.14*r*r;
 }
float rectangular(float b, float c){
  
  return b * c;
}
