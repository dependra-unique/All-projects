#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int A[10], data, mid, n, i;
    printf("Enter the number of element:");
    scanf("%d", &n);
    printf("Enter the sequencial array element:");
    for(i=0; i<=n-1; i++){
    scanf("%d", &A[i]);
    }
    printf("Array element:");
    for(i=0; i<=n-1; i++){
        printf("%d\t", i);
    }
    printf("Enter the data that you want to be search:");
    scanf("%d", &data);
    int low, high;
    low=0; high=n-1;
    while(low<=high)
    {
       mid = floor((low+high)/2);
    if(A[mid]<data){
    low = mid+1;
    }
    else if(A[mid]==data){
        
    printf("the element is found at index %d", mid);
    
    }

    else
    {
        high=mid-1;
        mid = floor((low+high)/2);
    }
    if(low>high){
        printf("%d is not found", data);
    }
    return 0;

    }
}