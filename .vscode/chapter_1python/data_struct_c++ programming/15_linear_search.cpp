#include<iostream>
using namespace std;
int search(int a[], int n, int data){
    for(int i=0; i<n; i++){
        if(a[i]==data){
            return i;
        }
    }
    return 0;

}

int main(){

    int a[10], n, i;
    cout<<"Enter the size of array :";
    cin >> n;
    cout<< "Enter the element of array : ";
    for(i=0; i<n; i++){
          cin>>a[i];
    }
    int data;
    cout<< "Enter the data that you want to search : ";
    cin>>data;
    int key = search(a, n, data);
    
    // if(key == 1){
    //     cout<<"Data is present"<<endl;
        
    // }
    // else{
    //     cout<<"data is absent"<<endl;
    // }

    cout << "the index of the element is "<<key<<endl;

}