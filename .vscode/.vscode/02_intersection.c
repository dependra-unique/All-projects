#include<stdio.h>
#include<conio.h>
int main(){
    int a[10], b[10], c[20], i, j, k=0, n1, n2, tab=0;
    printf("Enter the lenth of array of a:");
    scanf("%d", &n1);
    printf("Enter the element of array:");
    for(i=0; i<n1; i++){
        scanf("%d", &a[i]);

    }
    printf("Enter the lenth od array of b:");
    scanf("%d", &n2);
    printf("Enter the element of array:");
    for(j=0; j<n2; j++){
        scanf("%d", &b[j]);
    }
    for(i=0; i<n1; i++){
        for(j=0; j<n2; j++){
            if(a[i]==b[j]){
                c[k]=a[i];
                k++;

            }
        }
    }
    // for(i=0; i<k; i++){
    //     printf("%d\t", c[i]);
    // }

    for(i=0; i<k; i++){
        tab=0;
        for(j=i+1; j<k; j++){
            if(c[i]==c[j]){
                tab=1;
                break;
            }
        }
        if(tab==0){
            printf("%d\t", c[i]);
        }
    }
       
}
