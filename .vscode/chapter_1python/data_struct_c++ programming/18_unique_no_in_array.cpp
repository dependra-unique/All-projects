#include<iostream>
using namespace std;
int main(){
    int a[10], n, i, flag=0;
    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"Enter the element of array";
    for(i=0; i<n; i++){
        scanf("%d", &n);

    }
    int unique = a[0];
    
    for(i=0; i<n; i++){
        flag = 0;
        if(unique!=a[i]){
            flag=1;
             break;
        }
        else{
            flag= 0;

        }
    }
    if(flag == 1){
        cout<<"The unique numbner is ::"<< a[i]<<" "<<endl;
    }
}