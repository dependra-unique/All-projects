#include<iostream>
using namespace std;
int main(){
    int a[8]={2, 5, 7, 8, 33, 55, 77, 99}, i, mid, low, upp, data;
    cout << "Enter your data : " ;
    cin >>data;

    low = 0; 
    upp = 8-1;

    while(low<=upp){
        mid = (low+upp)/2;
        if(a[mid]==data){
            cout << "Element found at index "<<mid;
            break;
        }
        else if(a[mid]<data){
          
            
            low = mid+1;


        }
        else if(a[mid]>data){
            
            
            upp = mid-1;

        }
        else{
            cout << "Element not found";
        }
        

    }
    if(low>upp){
    
            cout << "Element not found";
        
    }
}
