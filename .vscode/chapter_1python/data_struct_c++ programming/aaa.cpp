#include<iostream>
using namespace std;

int main(){
int a[10] = {1, 2, 3, 4};
int b[10];
int j=0;
for(int i=0; i<4; i++){
     b[j]=a[i];
     j++;
}
for(int j=4; j<10; j++){
b[j]=1;
}

for(int i=0; i<10; i++)
{
    cout<<b[i];
}
}