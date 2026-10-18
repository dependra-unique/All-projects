#include<iostream>
using namespace std;

int sum(int a[], int n){
    int sum1=0;
     for(int i=0; i<n; i++){
         sum1 = sum1+a[i];
   
     }
     return sum1;

}

main(){
    int a[10], n, i;
    cout<<"Enter the sizem of array: ";
    cin>>n;
    cout<< " Enter the element of array : ";
    for(i=0;i<n; i++){
        cin>> a[i];
    }
    
    cout<<"The sum of array is : "<< sum(a, n) <<endl;

}