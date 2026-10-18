#include<iostream>
using namespace std;

int main(){
    int a[9]={6, 8, 9, 6, 3, 2, 23, 1, 5};
    int n=9;
    for(int i =0; i<n-1; i++){
        int minindex=i;
        for(int j=i+1; j<n; j++){
            if(a[j]<a[minindex]){
                minindex=j;
            }
        }
        int temp = a[minindex];
        a[minindex]=a[i];
        a[i]=temp;
        
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}