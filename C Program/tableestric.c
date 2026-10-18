// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     for(int i = 1; i<=5; i++){
//         for(int j =1; j<=5; j++){
//             printf("%d", j);
//         }
        //printf("\n");
//     }
//     getc;
// }

#include<stdio.h>
#include<conio.h>
void main()
{
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = 1; j<=i; j++)
//         {
//             printf("*");
//         }
//          printf("\n");
//     }
//    getc;

// for(int i = 1; i<=5; i++)
// {
//     for(int j = 1; j<=; j++)
//     {
//         printf("%d", j);
//     }
//     printf("\n");

// }
// getc;


// for(int i = 1; i<=5; i++)
// {
//     for(int j = 1; j<=i; j++)
//     {
//         printf("%d", i);
//     }
//     printf("\n");
// }
// getc;


// for(char i = 65; i<=69; i++)
// {
//     for(char j = 65; j<=i; j++)
//     {
//         printf("%c", j);
//     }
//     printf("\n");
// }
// return 0;

for(int i = 1; i<=5; i++)
{
    for(int j = 1; j<=9; j++)
    {
        if(j >= (6-i) && j <= (4+i))
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }

    }
    printf("\n");

}
getc;
}