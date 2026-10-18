#include<stdio.h>
#include<conio.h>
void main(){
    int i, j, k, c1, c2, r1, r2, A[10][10], B[10][10], C[10][10];
    printf("Enter the number of rows of matrix A:");
    scanf("%d", &r1);
    printf("Enter the number of column of matrix A:");
    scanf("%d", &c1);
    printf("Enter the number of rows of matrix B:");
    scanf("%d", &r2);
    printf("Enter the number of column of matrix B:");
    scanf("%d", &c2);
    if(c1==r1){
        printf("Enter the elements of matrix A:");
        for(i=0; i<r1; i++){
            for(j=0; j<c1; j++){
                scanf("%d", &A[i][j]);
            }
        }
        
    
    
    printf("Enter the elements of matrix B:");
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
            scanf("%d", &B[i][j]);

        }
    }printf("Matrix A:");
    printf("\n");
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
          printf("%d\t", A[i][j]);
        }
        printf("\n");
    }printf("Matrix B:");
    printf("\n");
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
        
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            C[i][j]=0;
            for(k=0; k<r2; k++){
                C[i][j]= C[i][j]+A[i][k]+B[k][j];
            }
        }
    }
    printf("Matrix C:");
    printf("\n");
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    }
    else{
        printf("Matrix multiplication is not possible");

    }
    getc;
}
