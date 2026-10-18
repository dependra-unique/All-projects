#include<iostream>
using namespace std;

int binaryfirstocc(int a[], int size, int data){
    int ans;
    int low=0;
    int upp= size-1;
    int mid = low+(upp-low)/2;
    while(low<=upp){
        mid = low+(upp-low)/2;

        if(a[mid]==data){
             ans=mid;
             upp = mid-1;
        }
        else if(a[mid]<data){
            low = mid+1;
        }
        else if(a[mid]>data){
            upp = mid -1;
        }
        return ans;
    } 
}
int binarylastocc(int a[], int size, int data)
{
    int ans;
    int low=0;
    int upp= size-1;
    int mid = low+(upp-low)/2;
    while(low<=upp){
         mid = low+(upp-low)/2;

        if(a[mid]==data){
             ans=mid;
             low = mid+1;
        }
        else if(a[mid]<data){
            low = mid+1;
        }
        else if(a[mid]>data){
            upp = mid -1;
        }
        return ans;
    } 
}

int main(){
    int a[10]={2, 4, 5, 8, 8, 8, 8,8, 8, 9};
    
    cout << "The first occurence " << binaryfirstocc(a, 10, 8) << endl;
    cout << "The second occurence "<< binarylastocc(a, 10, 8) <<endl;



}