#include<iostream>
using namespace std;

void reverse(int a[], int n){
     
    int start =0;
    int end = n-1;
    while(start<=end){

        swap(a[start], a[end]);
        start++;
        end--;

    }
}
void print(int a[], int n)
{
    for(int i=0; i<n; i++){
        cout << a[i]<<" ";
    }
    cout <<endl;
}



int main(){
    int a[10], i, n;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the element of array : ";
    for(i=0; i<n; i++){
        cin>>a[i];

    }

    reverse(a, n);
    print(a, n);
    
    
}