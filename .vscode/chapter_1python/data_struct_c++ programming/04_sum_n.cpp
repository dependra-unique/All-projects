#include<iostream>
using namespace std;

int main(){

    // int n, sum;
    // cout <<"Enter the number";
    // cin>>n;
    // // int i=1;
    // // while(i<=n){

    // //     sum = sum+i;
    // //     i=i+1;
    // // }
    // // cout << "The sum is : " << sum <<endl;

    // sum = (n*(n+1))/2;
    // cout << "The sum is : "<< sum;
   
   int n;
   int sum=0;
   cin>>n;
   int i = 2;
   while(i<=n){
    sum= sum+i;
    i=i+2;
   }
   cout<<" the sum is: "<< sum;
}