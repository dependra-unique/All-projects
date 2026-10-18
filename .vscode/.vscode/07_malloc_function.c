// use malloc function  
// it initialise all array elemenmt to garbage value

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *ptr, n;
    
//     //Enter size of array which mapped to n

//     printf("Enter the size of array:");
//     scanf("%d", &n);
//     ptr = (int *) malloc(n * sizeof(int));
    
//     // printf("Enter the element of arrray");
//     // for(int i=0; i<n; i++){
//     //     scanf("%d", &ptr[i]);

//     // }
//     printf("The element of array is this :");
//     for(int i=0; i<n; i++){
//         printf("The first element at index %d is :%d\n", i, ptr[i]);

//     }
    
// }



// use calloc function
// it initialise aii element of array to zero

#include<stdio.h>
#include<stdlib.h>
int newsize(int n){
 printf("Enter the new size of array:");
    scanf("%d", &n);
    return n;
    
    }


int main(){
    int *ptr, n, i;
    
    printf("Enter the size of array:");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    
    printf("Enter the element of array:");
    for(i=0; i<n; i++){
        scanf("%d", &ptr[i]);

    }

    for(i=0; i<n; i++){
        printf("\nThe array element index %d is %d\n", i, ptr[i]);
    }


    // use this free function memory realese

//    free(ptr);

   //use realloc function
    

    //// without function

    // printf("Enter the new size of array:");
    // scanf("%d", &n);

    //// use function
    
    int new = newsize(n);

    ptr = (int *)realloc(ptr, new*sizeof(int));
    
    printf("Enter the element of array :");
    for(i=0; i<new; i++){
        scanf("%d", &ptr[i]);
    }

    for(i=0; i<new; i++){
        printf("The array element at index %d is %d\n", i, ptr[i]);
        
        
    }

    free(ptr);

    
}