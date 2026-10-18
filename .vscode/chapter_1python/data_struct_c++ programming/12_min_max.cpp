#include<iostream>
using namespace std;
int minimum(int a[], int n){
    int mini= INT_MAX;
    int i;
    for(i=0; i<n; i++){

         mini = min(mini, a[i]);

        // if(a[i]<min){
        //     min = a[i];
        // }
    }
    return mini;
}
int maximum(int a[], int n){
    int maxi= INT_MIN;
    int i;
    for(i=0; i<n; i++){

        maxi = max(maxi, a[i]);

        // if(a[i]>max){
        //     max = a[i];
        // }
    }
    return maxi;
}

int main(){
    int a[10], i, n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the element of array: ";
    for(i=0; i<n; i++){
        cin>> a[i];

    }
    cout<<"The minmum value is :"<<minimum(a, n)<<endl;;
    cout<<"The maxmum value is :"<<maximum(a, n);


}