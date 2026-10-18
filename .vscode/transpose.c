#include<stdio.h>
#include<conio.h>
void main(){
    int i, j, A[10][10], r, c;
    printf("Enter the rows of matrix A:");
    scanf("%d", &r);
    printf("Enter the column of matrix A:");
    scanf("%d", &c);
    printf("Enter the elements of nmatrix A");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d", &A[i][j]);
        }
    }
    printf("Matrix A:\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d\t", A[i][j]);
        }
         printf("\n");
    }
    printf("Transpose matrix A:\n");
    for(i=0; i<r; i++){
        for(j=0;j<c;j++){
            printf("%d\t", A[j][i]);
        }printf("\n");
    }
    getc;
}