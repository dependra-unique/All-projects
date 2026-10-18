#include<stdio.h>
#include<conio.h>
int main(){
    int a[10], b[10], i, j=0, n, data, flag=0;
    printf("Enter the size of a :");
    scanf("%d", &n);
    printf("Entee the element of a:");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);

    }
    printf("Enter the data that you want to delect:");
    scanf("%d", &data);
    for(i=0; i<n; i++){
        if(a[i]!=data){
            b[j]=a[i];
            j++;          
        }
        else{
            continue;
        }
    }
    printf("After deletion the array element is:\n");
    for(i=0; i<n-1; i++){
        printf("%d\n", b[i]);
    }

    }