#include<stdio.h>
#include<conio.h>
int main(){
    int a[5], b[5], c[10], i, j, k=0, n1, n2, tab=0;
    printf("Enter the number of element:");
    scanf("%d", &n1);
    printf("Enter the element of set a:");
    for(i=0; i<n1; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the number of element:");
    scanf("%d", &n2);
    printf("Enter the element of set b:");
    for(j=0; j<n2; j++){
        
        scanf("%d", &b[j]);
    }
    for(i=0; i<n1; i++){
        
            c[k]=a[i]; 
            k++;
            
    }
    for(j=0; j<n2; j++){
        
            c[k]=b[j];
            k++;

    }
    
    
    
    for(i=0; i<n1+n2; i++){
        tab=0;
        for(j=i+1; j<n1+n2; j++){

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