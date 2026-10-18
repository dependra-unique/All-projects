#include<stdio.h>
#include<conio.h>
// int printfact(int );
// int main()
// {
//     int n;
//     printf("Enter the number");
//     scanf("%d", &n);
//     printfact(n);
//     printf("%d", printfact(n));


//     return 0;

// }
// int printfact(int n){
//    if(n!=0){
       
//        return n*printfact(n-1); 
//    }
//      else{
//          return 1;
//      }
//     }
 
 //sum using recursion
//int printsum(int );
//int main()//{
//     int n;
//     printf("Enter the number:");
//     scanf("%d", &n);
//     printf("%d", printsum(n));
//     return 0;

// }
// int printsum(int n){
//     if(n!=0){
//         return n + printsum(n-1);
//     }
//     else{
//         return n;
//     }
// }


// fibonacci series using recursion
// int fibonacci(int );
// int main(){
//     int n, i;
//     printf("Enter the number:");
//     scanf("%d", &n);
//     for(i = 0; i < n; i++){
//         printf("%d\n", fibonacci(i));
//     }
// return 0;

// }
// int fibonacci(int n){ 
//     if(n == 0){
//         return 0;
//     }
//     else if(n == 1){
//           return 1;
//     }
//     else
//     {    

//         return fibonacci(n-2) + fibonacci(n-1);
//     }   
// }

// fibonacci series using recursion
// int fibonacci(int);
// int main()
// {
//     int n, m = 0, i;
//     printf("Total number of n:");
//     scanf("%d", &n);
//     printf("Fibonacci series are:n");
//     for(i = 1; i<=n; i++){
//         printf("%d\n", fibonacci(m));
//         m++;
//     } 
//     return 0;
// }
// int fibonacci(int n){
//     if(n == 0 || n == 1)
//     return n;
//     else
//     return(fibonacci(n-1)+ fibonacci(n-2));
// }


// void hello(int count);
// int main(){
//     hello(5);
// }
// void hello(int count){
//     if(count == 0){
//         return;
//     }
//     printf("Hello\n");
//     hello(count-1);
// }


//celcious to farenhight using recursion
// float convertemp(float celcious);
// int main(){
//     float celcious;
//     printf("Enter the temperature in celcious:");
//     scanf("%f", &celcious);
//     float far = convertemp(celcious);
//     printf("The temperature in far = %f", far);
//      return 0;

// }
// float convertemp(float celcious){
//     float far = celcious *(9.0/5.0) + 32;
//     return far;
// }


//percentage of three subject using recursion
// float calpercentage(float science, float maths, float hindi);
// int main(){
//     float science, maths, hindi;
//     printf("Enter the numbers of science, maths, hindi:");
//     scanf("%f%f%f", &science, &maths, &hindi);
//     printf("The percentage of all three subjectis = %f", calpercentage(science, maths, hindi));
//     return 0;
// }
// float calpercentage(float science, float maths, float hindi){
//     return (science+maths+hindi)/3.0;
// }



// fibonacci series using recursion
// int fibonacci(int );
// int main(){
//     int n;
//     printf("Enter the number:");
//     scanf("%d", &n);
//     for(int i = 0; i<n; i++){
//     printf("%d", fibonacci(i));
//     }
//     return 0;

// }
// int fibonacci(int n){
//     if(n == 0 || n == 1)
//         return n;
//     else
//     return fibonacci(n-2)+fibonacci(n-1);
// }



int main(){
    int n, a = 0, b = 1;
    printf("Enter the number:");
    scanf("%d", &n);
    for(int i = 0; i<=n; i++){

        int c = a+b;
        a = b;
        b = c;
        printf("%d", c);
        return 0;
        }
        
        
    
}
