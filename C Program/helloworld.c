#include <stdio.h>

// void helloworld();
// int goodbye();
// void main()
// {
//    helloworld(); goodbye();
//    helloworld(); goodbye();
//    helloworld(); goodbye();
//    getc;

// }
// void helloworld(){
//    printf("helloworld\n");
// }
// int goodbye(){
//     printf("Good bye\n");
// }
 

void namaste();
//void bonjour();
int main(){
    char ch;
    printf("enter i for indian & b for bonjour");
    scanf("%c", &ch);
    if(ch == 'i'){
    namaste();}
    else{
    bonjour();}

    // namaste();
}
void namaste(){
    printf("Namaste");
   // bonjour();
}
void bonjour(){
    printf("Bonjour");
}
void bonjour();