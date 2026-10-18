#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the value of a, b, c");
    scanf("%d%d%d", &a, &b, &c);
    d = (a>b) || (b>c);
    printf("Logical OR value is = %d", d);


    //  int aa, bb, cc, dd, ee, ff, gg, hh;   //if aa=3, bb=4, cc=6, dd=8
    //  printf("Enter the value is aa, bb, cc, dd");
    //  scanf("%d%d%d%d", &aa, &bb, &cc, &dd);
    //  ee = (aa>bb)!=(cc<dd);  //ee = T(1)
    //  ff = (aa<cc)==(bb >dd);  // ff = F(0)
    //  gg = (aa>2)&&(bb<7);  //gg = T(1)
    //  hh = (aa>5)&&(bb<7);   //hh = F(0)
    //  printf("ee = %d\nff = %d\ngg =%d\nhh = %d\n", ee, ff, gg, hh);

// }
