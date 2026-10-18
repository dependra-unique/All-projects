#include<stdio.h>
#include<conio.h>

int main(){
    int a[10], i=0,j,  low, upp,mid, n, data, flag;
    printf("Enter the size of a:");
    scanf("%d", &n);
    printf("Enter the sorting array of a:");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the data that you want to search:");
    scanf("%d", &data);
    low=0;
    upp=n-1;
    while(low<=upp){
        mid = (low+upp)/2;
        if(a[mid]==data){
            printf("Element found at index %d ", mid);
            break;
        }
        
        else if(a[mid]>data){
            upp = mid-1;

        }
        else if(a[mid]<data){
            low = mid+1;

        }
        else{
        printf("Element not found");
    }
    
        

    }
    if(low>upp){
        printf("Element not found");
    }
   
    

}