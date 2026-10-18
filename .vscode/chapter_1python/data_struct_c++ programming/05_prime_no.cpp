#include<iostream>
using namespace std;
int main(){
    int n, i=2;
    cout <<"Enter the number: ";
    cin>>n;
    while(i<n){
        if(n%i==0){
        cout<<"The number is not prime";
        break;
        }
        i=i+1;
        }
       if(i==n){
        cout <<" the number is prime";
       }
    
}