#include<stdio.h>
#include<conio.h>
int main(){
    int a[10], i, j=0, n, b[15], k, data;
    printf("Enter the size of a:");
    scanf("%d", &n);
    printf("Enter the element of a:");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);

    }
    printf("Enter the index possition doing insert element:");
    scanf("%d", &k);
    printf("Enter the element that you want to insert:");
    scanf("%d", &data);
    for(i=0; i<n; i++){
        if(i!=k){
            b[j]=a[i];
            j++;

        }
        else{
            b[k]=data;
            j++;
            i--;
            k=0;
        }
    }
    printf("After insert element:");
    for(i=0; i<n+1; i++){
        printf("%d\n", b[i]);
    }
}
