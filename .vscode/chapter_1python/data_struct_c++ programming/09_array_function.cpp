#include<iostream>
using namespace std;
void printarray(int arr[], int size){
    cout << "Printing the element of array"<< endl;
    for(int i=0; i<9; i++){
    cout<< arr[i]<<endl;
    }
}
int main(){
    int a[10]={1, 4, 7, 9};
    
    printarray(a, 10);
    // int size_a = sizeof(a)/sizeof(int);        // this statement is false
    cout << "hello duniya";
}