#include<stdio.h>
#include<conio.h>
   void printtable( int n);

 //void sum(int a, int b);
// int main(){
//     int a, b;
//     printf("Enter first number:");
//     scanf("%d", &a);
//     printf("Enter second number:");
//     scanf("%d", &b);
//     sum(a, b);
//     printf("%d", sum(a, b));
//     return 0;
// }
// void sum(int x, int y){
//     return x + y;
// }
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    printtable(n);  // actual parameter
}  
void printtable( int n){ // formal parameter
    for(int i = 1; i<=10; i++){
        printf("%d*%d = %d\n", n, i, n*i);
    }
    
}