#include<stdio.h>
#include<conio.h>
int main(){
    int a[10], n, i, data, k=0;
    printf("Enter the size of a:");
    scanf("%d", &n);
    printf("Enter the element of a:");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);

    }
    printf("Enter the data that you found:");
    scanf("%d", &data);
    for(i=0; i<n; i++){
        k=0;
        if(a[i]==data){
            k=1; 
            break;
        }

    }
    if(k==1){
        printf("Element found at index %d\n ", i);
        printf("and the positin of element is %d ", i+1);
    }
    else {
        printf("Element not found");
    }

}