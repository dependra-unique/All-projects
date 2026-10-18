// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int n, i = 1, table;
//     printf("Enter the number:");
//     scanf("%d", &n);
//     table;
//     int t = n*i;
//     printf("%d*%d = %d\n", n, i, t);
//     i++;
//     if(i<=10)
//     goto table;
// }

// #include <conio.h>
// #include <stdio.h>
// int main()

// {
//     int i = 1,n = 10, label;
//     char arr[15];
//     printf("Enter your name:");
//     gets(arr);
//     label:
//     printf("%s\n", arr);
//     i++;
//     if(i <= n){
//         goto label;
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int i = 1, n;
//     printf("Enter the number:");
//     scanf("%d", &n);
//     label:
//     printf("%d\n", i++);
//     if(i<=n)
//     goto label;
// }


#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    if(n%2==0){
        goto even;
    }
    else{
        goto odd;
    }
    even:
    printf("\nThe number is even %d", n);
    return 0;
    odd:
    printf("\nThe number is odd %d", n);
    return 0;
    
}