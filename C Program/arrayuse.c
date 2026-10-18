#include<stdio.h>
#include<conio.h>
//enter element print element using array
// void main(){
//     int A[50], n, i;
//     printf("Enter the number:");
//     scanf("%d", &n);
//     for(i = 0; i<n; i++){
//         scanf("%d", &A[i]);
//     }
//     for(i = 0; i<n; i++){
//         printf("%d", A[i]);
//     }
//     getc;
// }

//print sum of array
// void main(){
//     int A[30], i, n, sum = 0;
//     printf("Enter the number:");
//     scanf("%d", &n);
//     for(i = 0; i<n; i++){
//         scanf("%d", &A[i]);
//     }
//     for(i = 0; i<n; i++){
//         sum = sum + A[i];
//     }
//     printf("The sum is = %d", sum);
//     getc;
// }


//print even in array
// void main(){
//     int A[10], n, i;
//     printf("enter the number");
//     scanf("%d", &n);
//     for(i = 0; i<n; i++){
//         scanf("%d", &A[i]);
//     }
//     for(i = 0; i<n; i++){
//         if(A[i]%2==0){
//             printf("%d is even number\n", A[i]);
//         }
//         getc;
//     }

    
    
//     }


// largest element using array
// void main(){
//     int A[50], i, n, largest;
//     printf("Enter the number:");
//     scanf("%d", &n);
//     for(i = 0; i<n; i++){
//         scanf("%d", &A[i]);
//     } 
//     largest = A[0];
//     for(i= 0; i<n; i++){
//         if(A[i]>largest){
//             largest = A[i];
//         }
//         getc;
    
//     }
//     printf("%d is largest\n", largest);
//     getc;
// }    


//print matrix using array
// void main(){
//     int A[40][50], i, j, n, m;
//     printf("enter the number of n & m that you want:");
//     scanf("%d%d", &n, &m);

//     for(i = 0; i<n; i++){
//         for(j = 0; j<m; j++){
//             scanf("%d", &A[i][j]);
//         }
//     }
//     for(i = 0; i<n; i++){
//         for(j = 0; j<m; j++){
//             printf("the matrix element = %d\n", A[i][j]);
//         }
//     }getc;
// }


// sum of element using array
// #include<stdio.h>
// #include<conio.h>
// void main(){
//     int A[40][50], i, j, n, m, sum = 0;
//     printf("Enter the number of a & b that you want:");
//     scanf("%d%d", &n, &m);
//     for(i = 0; i<n; i++){
//         for(j = 0; j<m; j++){
//             scanf("%d%d", &A[i][j]);
//         }
//     }
//     for(i = 0; i<n; i++);{
//         for(j = 0; j<m; j++){
//             sum = sum + A[i][j];
//             printf("The sum of matrix element is = %d", sum);
//         }
//     }
//     getc;
    
//     }

//tranpose matrix using array
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int A[10][20], i , j, n, m;
//     printf("Enter the matrix element rows & column");
//     scanf("%d%d", &n, &m);
//     for(i = 0; i<n; i++)
//     {
//         for(j = 0; j<m; j++){
//             scanf("%d", &A[i][j]);
//         }
//     }
//     for(i = 0; i<n; i++){
//         for(j = 0; j<m; j++){
//             printf("%d\n", A[j][i]);
//         }
//     }
//     return 0;
// }


#include<stdio.h>
#include<conio.h>
int fibonacci(int n);
int main(){
    int n;
    printf("Enter the number of n");
    scanf("%d", &n);
    for(int i=0; i< n; i++){
    int fibonacci_series = fibonacci(i);
    printf("fibonacci series is = %d", fibonacci_series);
    }
    return 0;

}
int fibonacci(int n){
    if(n!=0){ 
        return fibonacci(n - 1) + fibonacci(n - 2);
        }
    }
    else {
        return 0;
    }
}
    