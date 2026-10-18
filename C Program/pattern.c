#include<stdio.h>
#include<conio.h>
void main()
{  //star pettern until the column 9 and rows 5 both the side of every star is blank space
//     int i, j;
//     for(i = 1; i<=5; i++)
//     {
//         for(j = 1; j<=5; j++)
//         {
//             if(i+j <=5)
//             {
//                 printf(" ");
//             }
//             else
//             {
//                 printf("* ");
//             }
//         }
//         printf("\n");
//     }
//     getc;


//       // pettern row 54321 and in next row first column is blanck 4321 and next so on

//     //int i, j;
//     for(i = 1; i<=5; i++)
//     {
//         for(j = 1; j<=5; j++)
//         {
//             if(j >= i)
//             {
//                 printf("%d", 6-j);
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     getc;



//      // pettern row 12345 and in next row  first column is blank 2345 and so on

//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = 1; j<=5; j++)
//         {
//             if(j >= i)
//             {
//                 printf("%d", j);
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     getc;

  //pettern until the value of i is 5 and j is 9 with one banck
  for(int i = 1; i<=5; i++)
  {
    for(int j = 1; j<=5; j++)
    {
        if(j>=6-i)
        {
            printf(" *");
        }else{
            printf(" ");
        }

    }
    printf("\n");
    getc;

  }


}


void main(){
    int i,j,k=0;
    for(i=1;i<=7;i++){
        i<=4?k++:k--;
        for(i=1;i<=7;i++){
            if(j>=5-k&&j<=3+k)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}
