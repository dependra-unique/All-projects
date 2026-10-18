#include<stdio.h>
#include<conio.h>
int main(){
    int i, n, A[6];
    printf("Enter the number of element:");
    scanf("%d", &n);
    printf("Enter Array element:");
    for(i=1; i<=n; i++){
        scanf("%d", &A[i]);
    }
    printf("Array element:\n");
    for(i=1; i<=n; i++){
        printf("%d\t", A[i]);
    }
    printf("\nEnter the element that you want to be search:");
    int data;
    scanf("%d", &data);
    for(i=1; i<=n; i++){
        if(A[i]==data){
            printf("Element search at index i = %d", i);
            break;
        }
    }
    if(A[i]!=data){
    if(i==n){
        printf("Element not found");
    }
    }
    return 0;

}