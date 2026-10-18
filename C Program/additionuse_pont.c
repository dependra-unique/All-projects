#include<stdio.h>
#include<conio.h>

void swap(int a, int b);
// void add(int a, int b);
// int main()
// {
//     int a, b, c;
//     printf("Enter the number of a & b:");
//     scanf("%d%d", &a,&b);
//     add(a, b);
    
//     return 0;
    
//     }
//     void add(int p, int q)
//     {
//         int c = p+q;
//         printf("The addition is = %d", c);
//         return c;
//     }

int main()
{
    int a, b;
    printf("Enter the value of a & b:");
    scanf("%d%d", &a, &b);
    printf("Before swapping a = %d\nb = %d", a, b);
    swap(a, b);

    return 0;


}
void swap(int p, int q)
{
    int temp = p;
    p = q;
    q = temp;
    printf("after swapping p = %d\nq = %d", p , q);
    
}


